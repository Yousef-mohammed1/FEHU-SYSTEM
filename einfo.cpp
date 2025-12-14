#include "einfo.h"
#include "ui_einfo.h"
#include "globals.h"
#include "datamanger.h"
#include <QMessageBox>
#include <QPixmap>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

einfo::einfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::einfo)
    , m_currentUser(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());


    QRegularExpression textRegex("^[a-zA-Z\\s]+$");
    QRegularExpressionValidator *textValidator = new QRegularExpressionValidator(textRegex, this);

    QRegularExpression dateRegex("^[0-9/_\\-]+$");
    QRegularExpressionValidator *dateValidator = new QRegularExpressionValidator(dateRegex, this);

    QRegularExpression numberRegex("^[0-9]+$");
    QRegularExpressionValidator *numberValidator = new QRegularExpressionValidator(numberRegex, this);

    ui->lineEdit->setValidator(textValidator);

    ui->lineEdit_3->setValidator(dateValidator);

    ui->lineEdit_4->setValidator(numberValidator);
    ui->lineEdit_6->setValidator(numberValidator);

    m_currentUser = findUserByUsername(g_loggedUsername);

    if (m_currentUser)
    {
        QPixmap pix(m_currentUser->image);
        ui->studentimage->setPixmap(pix);
        ui->studentimage->setScaledContents(true);
        int w=ui->studentimage->width();
        int h=ui->studentimage->height();
        ui->studentimage->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
        ui->lineEdit->setText(m_currentUser->fullName);
        ui->lineEdit_2->setText(m_currentUser->address);
        ui->lineEdit_3->setText(m_currentUser->dateOfBirth);
        ui->lineEdit_4->setText(m_currentUser->studentCode);
        ui->comboBox->setCurrentText(m_currentUser->gender);
        ui->lineEdit_6->setText(m_currentUser->nationalId);
        ui->comboBox_2->setCurrentText(m_currentUser->year);
    } else {
        QMessageBox::critical(this, "Error", "User data not found for the specified username. Dialog will close.");
    }
}

void einfo::on_pushButton_clicked()
{
    if (!m_currentUser) {
        QMessageBox::critical(this, "Error", "Internal error: User data missing.");
        return;
    }

    if(!ui->lineEdit->hasAcceptableInput()) {
        QMessageBox::warning(this, "Input Error", "Name must contain letters and spaces only.");
        return;
    }

    m_currentUser->fullName = ui->lineEdit->text();
    m_currentUser->address = ui->lineEdit_2->text();
    m_currentUser->dateOfBirth = ui->lineEdit_3->text();
    m_currentUser->studentCode = ui->lineEdit_4->text();
    m_currentUser->gender = ui->comboBox->currentText();
    m_currentUser->nationalId = ui->lineEdit_6->text();
    m_currentUser->year = ui->comboBox_2->currentText();

    saveUsersToJson(g_jsonFileName);

    QMessageBox::information(this, "Success", "Student information updated successfully.");
    this->close();
}

einfo::~einfo()
{
    delete ui;
}
