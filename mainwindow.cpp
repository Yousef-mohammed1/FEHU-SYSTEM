#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include "globals.h"
#include <QKeyEvent>
#include <QPushButton>
#include "edit.h"
#include "datamanger.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    QPixmap pix(":/image/image/fehuimage.png");
    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);
    connect(ui->usernameLineEdit, &QLineEdit::returnPressed, [=](){
        ui->passwordLineEdit->setFocus();
    });
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_3_clicked() {
    QString user = ui->usernameLineEdit->text();
    QString pass = ui->passwordLineEdit->text();
    UserData* foundUser = findUserByUsername(user);
    if (foundUser and foundUser->password == pass) {
        if (foundUser->studentCode.isEmpty()) {
            QMessageBox::warning(this, "Access Denied", "This account is an Admin. Please use the Admin Login button.");
            return;
        }
        g_loggedUsername = user;
        s1 = new student(this);
        s1->show();
        this->hide();

    } else {
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
        ui->passwordLineEdit->clear();
    }
}
void MainWindow::on_pushButton_4_clicked()
{
    QString user = ui->usernameLineEdit->text();
    QString pass = ui->passwordLineEdit->text();
    UserData* foundUser = findUserByUsername(user);
    if(foundUser && foundUser->password == pass) {
        if (!foundUser->studentCode.isEmpty()) {
            QMessageBox::warning(this, "Access Denied", "This account is a Student. Please use the Student Login button.");
            return;
        }
        adminUsername = foundUser;
        edit *editWindow = new edit(this);
        editWindow->show();
        this->hide();
    } else {
        QMessageBox::critical(this, "Login Denied", "Admin: Invalid credentials. Access forbidden.");
        ui->passwordLineEdit->clear();
    }
}
