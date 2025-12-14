#include "takeuser.h"
#include "ui_takeuser.h"

takeuser::takeuser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::takeuser)
{
    ui->setupUi(this);
}

takeuser::~takeuser()
{
    delete ui;
}
