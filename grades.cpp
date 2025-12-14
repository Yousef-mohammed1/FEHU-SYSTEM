#include "grades.h"
#include "ui_grades.h"
#include "globals.h"
#include "datamanger.h"

QString getRating(double grade) {
    if (grade >= 90) return "A";
    else if (grade >= 80) return "B";
    else if (grade >= 70) return "C";
    else if (grade >= 60) return "D";
    else if (grade >= 50) return "E";
    else     return "F";
}
grades::grades(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::grades)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());


    UserData* currentUser = findUserByUsername(g_loggedUsername);

    if (currentUser) {
        double percentage = (static_cast<double>(currentUser->alltotal) / 500) * 100.0;
        ui->label->setText(currentUser->subject1_name);
        ui->label_4->setText(currentUser->subject2_name);
        ui->label_7->setText(currentUser->subject3_name);
        ui->label_10->setText(currentUser->subject4_name);
        ui->label_14->setText(currentUser->subject5_name);
        ui->label_2->setText(QString("%1").arg(currentUser->sub1));
        ui->label_5->setText(QString("%1").arg(currentUser->sub2));
        ui->label_8->setText(QString("%1").arg(currentUser->sub3));
        ui->label_11->setText(QString("%1").arg(currentUser->sub4));
        ui->label_15->setText(QString("%1").arg(currentUser->sub5));
        ui->label_23->setText(QString("%1%").arg(percentage));
        ui->label_3->setText(getRating(currentUser->sub1));
        ui->label_6->setText(getRating(currentUser->sub2));
        ui->label_9->setText(getRating(currentUser->sub3));
        ui->label_12->setText(getRating(currentUser->sub4));
        ui->label_16->setText(getRating(currentUser->sub5));
        ui->label_18->setText(QString::number(currentUser->alltotal));

        QString x;
        if ((currentUser->alltotal)>= 450) x="A";
        else if ((currentUser->alltotal)>= 400)  x="B";
        else if ((currentUser->alltotal) >= 350)  x="C";
        else if ((currentUser->alltotal) >= 300) x="D";
        else if ((currentUser->alltotal)>= 250) x="E";
        else x="F";

        ui->label_19->setText(x);
    }
}

grades::~grades()
{
    delete ui;
}
