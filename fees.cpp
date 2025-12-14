#include "fees.h"
#include "ui_fees.h"
#include "datamanger.h"
#include "globals.h"
#include "adminfees.h"
fees::fees(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fees)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    UserData* currentUser = findUserByUsername(g_loggedUsername);

    if (currentUser) {

        ui->label_4->setText(QString("%1").arg(currentUser->receiptdate));
        ui->label_5->setText(QString("%1").arg(currentUser->receiptnumber));
        ui->label_6->setText(QString("%1").arg(currentUser->typefee));
        ui->label_7->setText(QString("%1").arg(currentUser->value));
    }
}
fees::~fees()
{
    delete ui;
}
