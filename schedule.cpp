#include "schedule.h"
#include "ui_schedule.h"
#include <QPixmap>
#include "datamanger.h"
#include "globals.h"

Schedule::Schedule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Schedule)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    UserData* currentUser = findUserByUsername(g_loggedUsername);

    QPixmap pix(currentUser->schedule);
    ui->schedule->setPixmap(pix);
    ui->schedule->setScaledContents(true);
    int w=ui->schedule->width();
    int h=ui->schedule->height();
    ui->schedule->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Schedule::~Schedule()
{
    delete ui;
}
