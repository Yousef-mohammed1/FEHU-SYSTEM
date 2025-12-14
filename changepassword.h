#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>
#include "user.h"

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = nullptr);
    ~ChangePassword();

private slots:
    void on_btn_save_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif
