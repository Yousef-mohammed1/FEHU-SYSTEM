#ifndef STUDENT_H
#define STUDENT_H
#include "dialog.h"
#include"grades.h"
#include"schedule.h"
#include <QDialog>
#include"fees.h"
#include"support.h"
#include "changepassword.h"
#include "finalschedule.h"

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = nullptr);
    ~student();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();

private:
    Ui::student *ui;
    Dialog *d1;
    grades *g1;
    Schedule *schedule;
    fees *fees1;
    Support *s1;
    ChangePassword *cp;
    FinalSchedule*fs;
};

#endif
