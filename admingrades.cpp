#include "ui_admingrades.h"
#include"admingrades.h"
#include "globals.h"
#include "datamanger.h"
#include <QMessageBox>
#include <QPixmap>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
AdminGrades::AdminGrades(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminGrades)
    , m_currentUser(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    m_currentUser = findUserByUsername(g_loggedUsername);
    QRegularExpression numberRegex("^[0-9]+$");
    QRegularExpressionValidator *numberValidator = new QRegularExpressionValidator(numberRegex, this);
    ui->lineEdit->setValidator(numberValidator);
    ui->lineEdit_2->setValidator(numberValidator);
    ui->lineEdit_3->setValidator(numberValidator);
    ui->lineEdit_4->setValidator(numberValidator);
    ui->lineEdit_5->setValidator(numberValidator);

    QRegularExpression textRegex("^[a-zA-Z0-9\\s]+$");
    QRegularExpressionValidator *textValidator = new QRegularExpressionValidator(textRegex, this);
    ui->name_sub1->setValidator(textValidator);
    ui->name_sub2->setValidator(textValidator);
    ui->name_sub3->setValidator(textValidator);
    ui->name_sub4->setValidator(textValidator);
    ui->name_sub5->setValidator(textValidator);

    if(m_currentUser)
    {
        ui->lineEdit->setText(QString("%1").arg(m_currentUser->sub1));
        ui->lineEdit_2->setText(QString("%1").arg(m_currentUser->sub2));
        ui->lineEdit_3->setText(QString("%1").arg(m_currentUser->sub3));
        ui->lineEdit_4->setText(QString("%1").arg(m_currentUser->sub4));
        ui->lineEdit_5->setText(QString("%1").arg(m_currentUser->sub5));
        ui->name_sub1->setText(m_currentUser->subject1_name);
        ui->name_sub2->setText(m_currentUser->subject2_name);
        ui->name_sub3->setText(m_currentUser->subject3_name);
        ui->name_sub4->setText(m_currentUser->subject4_name);
        ui->name_sub5->setText(m_currentUser->subject5_name);
    }
}
void AdminGrades::on_saveButton_clicked()
{   if(ui->lineEdit->text().toInt()>100
        or ui->lineEdit_2->text().toInt()>100
        or ui->lineEdit_3->text().toInt()>100
        or ui->lineEdit_4->text().toInt()>100
        or ui->lineEdit_5->text().toInt()>100  ){
        QMessageBox::critical(this, "Error", "Max grade is 100 ");

    }
    else {
        if (!m_currentUser)
        {
            QMessageBox::critical(this, "Error", "Internal error: User data missing.");
        }
        m_currentUser->sub1 = ui->lineEdit->text().toInt();
        m_currentUser->sub2 = ui->lineEdit_2->text().toInt();
        m_currentUser->sub3 = ui->lineEdit_3->text().toInt();
        m_currentUser->sub4 = ui->lineEdit_4->text().toInt();
        m_currentUser->sub5 = ui->lineEdit_5->text().toInt();
        m_currentUser-> alltotal= m_currentUser->sub1+ m_currentUser->sub2+ m_currentUser->sub3+ m_currentUser->sub4+ m_currentUser->sub5;
        double percentage = (static_cast<double>(m_currentUser->alltotal) / 500) * 100.0;
        m_currentUser->subject1_name = ui->name_sub1->text();
        m_currentUser->subject2_name = ui->name_sub2->text();
        m_currentUser->subject3_name = ui->name_sub3->text();
        m_currentUser->subject4_name = ui->name_sub4->text();
        m_currentUser->subject5_name = ui->name_sub5->text();

        saveUsersToJson(g_jsonFileName);

        QMessageBox::information(this, "Success", "Student information updated successfully.");
        this->close();}
}
AdminGrades::~AdminGrades()
{
    delete ui;
}
