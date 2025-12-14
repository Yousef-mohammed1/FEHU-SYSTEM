#include "support.h"
#include "ui_support.h"
#include<QMessageBox>
#include "user.h"
#include"datamanger.h"
#include"globals.h"
Support::Support(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Support)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

}

Support::~Support()
{
    delete ui;
}

void Support::on_pushButton_clicked()
{
    QString selectedText = ui->comboBox->currentText();
    if(selectedText == "    Select  Your  Problem")
    {

        QMessageBox::warning(this ,"Your Submission","Please Select Your Problem Level");
    }
    else
    {

    QMessageBox::information(this,"Your Submission","Your Problem has been submitted successfully");
        hide();
    }
     UserData* currentUser = findUserByUsername(g_loggedUsername);
    if (currentUser) {
        (currentUser->cat)=selectedText;
         currentUser->problem = ui->lineEdit->text();
    }
     saveUsersToJson(g_jsonFileName);
}
