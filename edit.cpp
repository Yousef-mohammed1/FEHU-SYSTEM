#include "edit.h"
#include "ui_edit.h"
#include "datamanger.h"
#include "globals.h"
#include <QMessageBox>
#include"einfo.h"
#include "admin.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>
edit::edit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::edit)
    , m_currentUserData(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
    QRegularExpression numberRegex("^[0-9]+$");
    QRegularExpressionValidator *numberValidator = new QRegularExpressionValidator(numberRegex, this);
    ui->lineEdit_9->setValidator(numberValidator);
}
edit::~edit()
{
    delete ui;
}
void edit::on_editbutton_clicked()
{
    QString enteredUsername = ui->lineEdit_9->text();

    UserData* foundUser = findUserByUsername(enteredUsername);

    if (foundUser) {
        g_loggedUsername = enteredUsername;
        qDebug() << "Successfully set g_loggedUsername to:" << g_loggedUsername;
        admin *adminWindow = new admin(this);
        adminWindow->show();
        this->hide();
    } else {
        QMessageBox::critical(this, "Error", "The entered username is invalid or missing.");
    }
     // this->close();
}
