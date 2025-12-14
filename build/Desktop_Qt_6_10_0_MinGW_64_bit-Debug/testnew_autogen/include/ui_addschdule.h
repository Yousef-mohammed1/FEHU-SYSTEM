/********************************************************************************
** Form generated from reading UI file 'addschdule.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCHDULE_H
#define UI_ADDSCHDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addschdule
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *image_preview;

    void setupUi(QDialog *addschdule)
    {
        if (addschdule->objectName().isEmpty())
            addschdule->setObjectName("addschdule");
        addschdule->resize(926, 592);
        pushButton = new QPushButton(addschdule);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 490, 141, 29));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 13pt;"));
        label_2 = new QLabel(addschdule);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 50, 301, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));
        image_preview = new QLabel(addschdule);
        image_preview->setObjectName("image_preview");
        image_preview->setGeometry(QRect(210, 120, 511, 341));
        image_preview->setStyleSheet(QString::fromUtf8("font-size:20pt"));

        retranslateUi(addschdule);

        QMetaObject::connectSlotsByName(addschdule);
    } // setupUi

    void retranslateUi(QDialog *addschdule)
    {
        addschdule->setWindowTitle(QCoreApplication::translate("addschdule", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addschdule", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("addschdule", "Student\342\200\230s schedule", nullptr));
        image_preview->setText(QCoreApplication::translate("addschdule", "                   DROP PHOTO HERE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addschdule: public Ui_addschdule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCHDULE_H
