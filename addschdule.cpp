#include "addschdule.h"
#include "ui_addschdule.h"
#include "datamanger.h"
#include "globals.h"
#include <QMessageBox>
#include <QUrl>

addschdule::addschdule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addschdule)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
 // important to accept the drop motion
    setAcceptDrops(true);
}

addschdule::~addschdule()
{
    delete ui;
}
// checking if the image dropped on the (image_preview)label or not

void addschdule::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        QString path = event->mimeData()->urls().first().toLocalFile();
        // checking that the file we dropped is a photo not something else by checking extensions
        if (path.endsWith(".jpg", Qt::CaseInsensitive) ||
            path.endsWith(".png", Qt::CaseInsensitive) ||
            path.endsWith(".jpeg", Qt::CaseInsensitive)) {
            event->acceptProposedAction();
        }
    }
}

void addschdule::dropEvent(QDropEvent *event)
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

void addschdule::on_pushButton_clicked()
{
    m_currentUser = findUserByUsername(g_loggedUsername);

    if(m_selectedImagePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please drag and drop an image first.");
        return;
    }
    // replace it with the existed one
    m_currentUser->schedule = m_selectedImagePath;
    saveUsersToJson(g_jsonFileName);
    this->close();
}
