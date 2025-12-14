#include "adminsupport.h"
#include "ui_adminsupport.h"
#include <QMessageBox>
#include "globals.h"
#include "datamanger.h"
adminSupport::adminSupport(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminSupport)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    m_currentUser = findUserByUsername(g_loggedUsername);

    if (m_currentUser)
    {
        ui->label->setText(QString("%1").arg(m_currentUser->cat));
        ui->textEdit->setText(m_currentUser->problem);
    }

}

adminSupport::~adminSupport()
{
    delete ui;
}

void adminSupport::on_pushButton_clicked()
{
    if(m_currentUser)
    {
        (m_currentUser->cat)= "nothing";
        (m_currentUser->problem)="nothing";
        saveUsersToJson(g_jsonFileName);
        this->close();
    }
    saveUsersToJson(g_jsonFileName);
}

