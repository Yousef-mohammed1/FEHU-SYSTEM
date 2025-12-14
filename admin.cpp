#include "admin.h"
#include "ui_admin.h"
#include "globals.h"
#include "edit.h"
#include"admingrades.h"
#include "changeadmin.h"

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    einfo *einfoWindow = new einfo(this);

    einfoWindow->show();

}


void admin::on_pushButton_2_clicked()
{
    AG = new AdminGrades(this);
    AG->show();
}


void admin::on_pushButton_3_clicked()
{
    add = new addschdule(this);
    add->show();
}


void admin::on_pushButton_4_clicked()
{
    ff = new Adminfees(this);
    ff->show();
}


void admin::on_pushButton_5_clicked()
{
    AS = new adminSupport(this);
    AS->show();
}
void admin::on_pushButton_6_clicked()
{
    cp = new changeadmin(this);
    cp->show();
}
void admin::on_pushButton_7_clicked()
{
    afs = new AddFinalSchedule(this);
    afs->show();
}
