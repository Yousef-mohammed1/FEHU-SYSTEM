#include "addfinalschedule.h"
#include "ui_addfinalschedule.h"
#include "datamanger.h"
#include "globals.h"
#include <QMessageBox>
#include <QUrl>
#include <QFileInfo>

AddFinalSchedule::AddFinalSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFinalSchedule),
    m_currentUser(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    // important to accept the drop motion
    setAcceptDrops(true);
}

AddFinalSchedule::~AddFinalSchedule()
{
    delete ui;
}

// checking if the image dropped on the (image_preview)label or not
void AddFinalSchedule::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        QList<QUrl> urls = event->mimeData()->urls();
        if (urls.count() == 1) {
            QString filePath = urls.first().toLocalFile();
            // checking that the file we dropped is a photo not something else by checking extensions
            if (filePath.endsWith(".png", Qt::CaseInsensitive) ||
                filePath.endsWith(".jpg", Qt::CaseInsensitive) ||
                filePath.endsWith(".jpeg", Qt::CaseInsensitive)) {
                event->acceptProposedAction();
            }
        }
    }
}

// execution for the photo we dropped to save its path
void AddFinalSchedule::dropEvent(QDropEvent *event)
{
    const QMimeData* mimeData = event->mimeData();
    if (mimeData->hasUrls()) {
        QString filePath = mimeData->urls().at(0).toLocalFile();

        // svae the path of the dropped photo
        m_selectedImagePath = filePath;

        QPixmap pix(filePath);

        ui->image_preview->setPixmap(pix.scaled(ui->image_preview->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->image_preview->setText("");
    }
}

void AddFinalSchedule::on_btn_save_clicked()
{
    m_currentUser = findUserByUsername(g_loggedUsername);
    if(m_currentUser) {
        if (m_selectedImagePath.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please drop an image first.");
            return;
        }

        // replace it with the existed one
        m_currentUser->finalimage = m_selectedImagePath;

        saveUsersToJson(g_jsonFileName);
        QMessageBox::information(this, "Success", "Final Schedule path saved.");
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "User not found.");
    }
}
