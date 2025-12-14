/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Schedule
{
public:
    QLabel *schedule;

    void setupUi(QDialog *Schedule)
    {
        if (Schedule->objectName().isEmpty())
            Schedule->setObjectName("Schedule");
        Schedule->resize(923, 768);
        schedule = new QLabel(Schedule);
        schedule->setObjectName("schedule");
        schedule->setGeometry(QRect(0, 0, 921, 751));

        retranslateUi(Schedule);

        QMetaObject::connectSlotsByName(Schedule);
    } // setupUi

    void retranslateUi(QDialog *Schedule)
    {
        Schedule->setWindowTitle(QCoreApplication::translate("Schedule", "Dialog", nullptr));
        schedule->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Schedule: public Ui_Schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
