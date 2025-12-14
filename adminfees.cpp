#include "adminfees.h"
#include "ui_adminfees.h"
#include "globals.h"
#include "datamanger.h"
#include <QMessageBox>
#include <QPixmap>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
Adminfees::Adminfees(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Adminfees)
    , m_currentUser(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    m_currentUser = findUserByUsername(g_loggedUsername);

    QRegularExpression dateRegex("^[0-9/_\\-]+$");
    QRegularExpressionValidator *dateValidator = new QRegularExpressionValidator(dateRegex, this);

    ui->lineEdit->setValidator(dateValidator);

    QRegularExpression numberRegex("^[0-9]+$");
    QRegularExpressionValidator *numberValidator = new QRegularExpressionValidator(numberRegex, this);

    ui->lineEdit_2->setValidator(numberValidator);
    ui->lineEdit_4->setValidator(numberValidator);

    if(m_currentUser){
        ui->lineEdit->setText(QString("%1").arg(m_currentUser->receiptdate));
        ui->lineEdit_2->setText(QString("%1").arg(m_currentUser->receiptnumber));
        ui->lineEdit_3->setText(QString("%1").arg(m_currentUser->typefee));
        ui->lineEdit_4->setText(QString("%1").arg(m_currentUser->value));
    }
}
void Adminfees::on_pushButton_clicked()
{
    if (!m_currentUser) {
        QMessageBox::critical(this, "Error", "Internal error: User data missing.");
    }
    m_currentUser->receiptdate = ui->lineEdit->text();
    m_currentUser->receiptnumber = ui->lineEdit_2->text().toInt();
    m_currentUser->typefee = ui->lineEdit_3->text();
    m_currentUser->value = ui->lineEdit_4->text().toInt();

    saveUsersToJson(g_jsonFileName);

    QMessageBox::information(this, "Success", "Student information updated successfully.");
    this->close();
}
Adminfees::~Adminfees()
{
    delete ui;
}
