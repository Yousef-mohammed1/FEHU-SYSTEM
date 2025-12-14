#include "dialog.h"
#include "ui_dialog.h"
#include "globals.h"
#include "datamanger.h"
#include "user.h"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

        UserData* currentUser = findUserByUsername(g_loggedUsername);



    if (currentUser) {

    QPixmap pix(currentUser->image);
    ui->studentimage->setPixmap(pix);
    ui->studentimage->setScaledContents(true);
    int w=ui->studentimage->width();
    int h=ui->studentimage->height();
    ui->studentimage->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_4->setText(currentUser->fullName);
    ui->label_5->setText(currentUser->address);
    ui->label_6->setText(currentUser->dateOfBirth);
    ui->label_8->setText(currentUser->studentCode);
    ui->label_10->setText(currentUser->gender);
    ui->label_12->setText(currentUser->nationalId);
    ui->label_13->setText(currentUser->year);
    } else {
        ui->label_4->setText("User Data Not Found");
    }

}
Dialog::~Dialog(){
    delete ui;
}
