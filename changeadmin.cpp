#include "changeadmin.h"
#include "ui_changeadmin.h"
#include "globals.h"
#include "datamanger.h"
#include <QMessageBox>

changeadmin::changeadmin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changeadmin)
{
    ui->setupUi(this);

    this->setFixedSize(this->geometry().width(), this->geometry().height());
    ui->btn_save->setAutoDefault(false);
    ui->btn_save->setDefault(false);

    connect(ui->lineEdit_old, &QLineEdit::returnPressed, [=](){ ui->lineEdit_new->setFocus(); });
    connect(ui->lineEdit_new, &QLineEdit::returnPressed, [=](){ ui->lineEdit_confirm->setFocus(); });
    connect(ui->lineEdit_confirm, &QLineEdit::returnPressed, [=](){ ui->btn_save->click(); });
}

changeadmin::~changeadmin()
{
    delete ui;
}

void changeadmin::on_btn_save_clicked()
{
    if (adminUsername == nullptr) {
        QMessageBox::critical(this, "Error", "Internal Error: No Admin logged in.");
        return;
    }

    QString oldPass = ui->lineEdit_old->text();
    QString newPass = ui->lineEdit_new->text();
    QString confirmPass = ui->lineEdit_confirm->text();

    if (oldPass != adminUsername->password) {
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

    adminUsername->password = newPass;
    if(saveUsersToJson(g_jsonFileName)) {
        QMessageBox::information(this, "Success", "Password changed successfully.");
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to save to file.");
    }
}
