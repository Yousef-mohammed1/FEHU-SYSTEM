/********************************************************************************
** Form generated from reading UI file 'finalschedule.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALSCHEDULE_H
#define UI_FINALSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FinalSchedule
{
public:
    QLabel *label_image;

    void setupUi(QDialog *FinalSchedule)
    {
        if (FinalSchedule->objectName().isEmpty())
            FinalSchedule->setObjectName("FinalSchedule");
        FinalSchedule->resize(923, 768);
        label_image = new QLabel(FinalSchedule);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(0, 0, 921, 751));
        label_image->setAlignment(Qt::AlignCenter);

        retranslateUi(FinalSchedule);

        QMetaObject::connectSlotsByName(FinalSchedule);
    } // setupUi

    void retranslateUi(QDialog *FinalSchedule)
    {
        FinalSchedule->setWindowTitle(QCoreApplication::translate("FinalSchedule", "Finals Schedule", nullptr));
        label_image->setText(QCoreApplication::translate("FinalSchedule", "No Final Schedule Available", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinalSchedule: public Ui_FinalSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALSCHEDULE_H
