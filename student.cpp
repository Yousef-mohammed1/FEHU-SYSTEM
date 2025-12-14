#include "student.h"
#include "ui_student.h"
#include"dialog.h"
#include "globals.h"
#include"grades.h"
#include"schedule.h"

student::student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::student)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
}

student::~student()
{
    delete ui;
}

void student::on_pushButton_clicked()
{
    d1 = new Dialog(this);
    d1->show();
}

void student::on_pushButton_2_clicked()
{
    g1 = new grades(this);
    g1 ->show();
}

void student::on_pushButton_3_clicked()
{
    schedule = new  Schedule(this);
    schedule->show();
}

void student::on_pushButton_4_clicked()
{
    fees1 = new  fees(this);
    fees1->show();
}

void student::on_pushButton_5_clicked()
{
    s1 = new Support(this);
    s1->show();
}

void student::on_pushButton_6_clicked()
{
    cp = new ChangePassword(this);
    cp->show();
}
void student::on_pushButton_7_clicked()
{
    fs = new FinalSchedule(this);
    fs->show();
}
