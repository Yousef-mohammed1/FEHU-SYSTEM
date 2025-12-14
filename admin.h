#ifndef ADMIN_H
#define ADMIN_H
#include"edit.h"
#include <QDialog>
#include"admingrades.h"
#include"addschdule.h"
#include"adminfees.h"
#include "adminsupport.h"
#include "changeadmin.h"

#include "addfinalschedule.h"
namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();


private:
    Ui::admin *ui;
    edit*e1;
    AdminGrades *AG;
    addschdule *add;
    Adminfees *ff;
    adminSupport *AS;
    changeadmin *cp;
 AddFinalSchedule *afs;
};

#endif
