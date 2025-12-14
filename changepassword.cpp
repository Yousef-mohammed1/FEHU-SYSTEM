#include "changepassword.h"
#include "ui_changepassword.h"
#include "globals.h"
#include "datamanger.h"
#include <QMessageBox>

ChangePassword::ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{

    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
    ui->btn_save->setAutoDefault(false);
    ui->btn_save->setDefault(false);
    connect(ui->lineEdit_old, &QLineEdit::returnPressed, [=](){
        ui->lineEdit_new->setFocus();
    });

    connect(ui->lineEdit_new, &QLineEdit::returnPressed, [=](){
        ui->lineEdit_confirm->setFocus();
    });

    connect(ui->lineEdit_confirm, &QLineEdit::returnPressed, [=](){
       ui->btn_save->click();
    });
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_btn_save_clicked()
{    UserData* currentUser = findUserByUsername(g_loggedUsername);

    if (!currentUser) {
        QMessageBox::critical(this, "Error", "User not found.");
        return;
    }

    QString oldPass = ui->lineEdit_old->text();
    QString newPass = ui->lineEdit_new->text();
    QString confirmPass = ui->lineEdit_confirm->text();

    if (oldPass != currentUser->password) {
        QMessageBox::warning(this, "Error", "Old password is incorrect.");
        return;
    }

    if (newPass.isEmpty()) {
        QMessageBox::warning(this, "Error", "New password cannot be empty.");
        return;
    }

    if (newPass != confirmPass) {
        QMessageBox::warning(this, "Error", "New passwords do not match.");
        return;
    }

    currentUser->password = newPass;
    saveUsersToJson(g_jsonFileName);

    QMessageBox::information(this, "Success", "Password changed successfully.");
    this->close();
}
