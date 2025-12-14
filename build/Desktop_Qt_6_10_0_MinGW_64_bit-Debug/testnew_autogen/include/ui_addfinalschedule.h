/********************************************************************************
** Form generated from reading UI file 'addfinalschedule.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFINALSCHEDULE_H
#define UI_ADDFINALSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddFinalSchedule
{
public:
    QPushButton *btn_save;
    QLabel *label_2;
    QLabel *image_preview;

    void setupUi(QDialog *AddFinalSchedule)
    {
        if (AddFinalSchedule->objectName().isEmpty())
            AddFinalSchedule->setObjectName("AddFinalSchedule");
        AddFinalSchedule->resize(926, 592);
        btn_save = new QPushButton(AddFinalSchedule);
        btn_save->setObjectName("btn_save");
        btn_save->setGeometry(QRect(390, 490, 141, 29));
        btn_save->setStyleSheet(QString::fromUtf8("font-size: 13pt;"));
        label_2 = new QLabel(AddFinalSchedule);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 40, 351, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));
        image_preview = new QLabel(AddFinalSchedule);
        image_preview->setObjectName("image_preview");
        image_preview->setGeometry(QRect(210, 110, 511, 341));
        image_preview->setStyleSheet(QString::fromUtf8("font-size:20pt"));

        retranslateUi(AddFinalSchedule);

        QMetaObject::connectSlotsByName(AddFinalSchedule);
    } // setupUi

    void retranslateUi(QDialog *AddFinalSchedule)
    {
        AddFinalSchedule->setWindowTitle(QCoreApplication::translate("AddFinalSchedule", "Add Final Schedule", nullptr));
        btn_save->setText(QCoreApplication::translate("AddFinalSchedule", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("AddFinalSchedule", "Add Finals Schedule", nullptr));
        image_preview->setText(QCoreApplication::translate("AddFinalSchedule", "                   DROP PHOTO HERE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFinalSchedule: public Ui_AddFinalSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFINALSCHEDULE_H
