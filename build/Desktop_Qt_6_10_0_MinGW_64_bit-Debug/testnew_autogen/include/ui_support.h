/********************************************************************************
** Form generated from reading UI file 'support.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPORT_H
#define UI_SUPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Support
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Support)
    {
        if (Support->objectName().isEmpty())
            Support->setObjectName("Support");
        Support->resize(733, 500);
        comboBox = new QComboBox(Support);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 160, 321, 131));
        comboBox->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));
        label = new QLabel(Support);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 30, 181, 41));
        label->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));
        pushButton = new QPushButton(Support);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 410, 121, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 10pt;"));
        layoutWidget = new QWidget(Support);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 330, 471, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(Support);

        QMetaObject::connectSlotsByName(Support);
    } // setupUi

    void retranslateUi(QDialog *Support)
    {
        Support->setWindowTitle(QCoreApplication::translate("Support", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Support", "    Select  Your  Problem", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Support", "Student Info", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Support", "Grades", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Support", "Fees", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Support", "Schedule", nullptr));

        label->setText(QCoreApplication::translate("Support", "Support", nullptr));
        pushButton->setText(QCoreApplication::translate("Support", "Submit", nullptr));
        label_2->setText(QCoreApplication::translate("Support", "Explain Your Problem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Support: public Ui_Support {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
