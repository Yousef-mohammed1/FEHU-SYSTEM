#include "finalschedule.h"
#include "ui_finalschedule.h"
#include <QPixmap>
#include "datamanger.h"
#include "globals.h"

FinalSchedule::FinalSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinalSchedule)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    UserData* currentUser = findUserByUsername(g_loggedUsername);

    if(currentUser) {
        QPixmap pix(currentUser->finalimage);
        ui->label_image->setPixmap(pix);
        ui->label_image->setScaledContents(true);
        int w = ui->label_image->width();
        int h = ui->label_image->height();
        ui->label_image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    }
}

FinalSchedule::~FinalSchedule()
{
    delete ui;
}
