#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "user.h"
#include"einfo.h"

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

private slots:


    void on_editbutton_clicked();

private:
    Ui::edit *ui;
    UserData* m_currentUserData;

    void loadCurrentData();
    einfo *r1;
};

#endif
