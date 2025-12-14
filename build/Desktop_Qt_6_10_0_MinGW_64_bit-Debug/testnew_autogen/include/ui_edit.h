/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QLabel *label_10;
    QPushButton *editbutton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_9;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName("edit");
        edit->resize(646, 575);
        label_10 = new QLabel(edit);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(290, 30, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        editbutton = new QPushButton(edit);
        editbutton->setObjectName("editbutton");
        editbutton->setGeometry(QRect(260, 320, 151, 41));
        editbutton->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));
        layoutWidget = new QWidget(edit);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 190, 421, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout->addWidget(label);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout->addWidget(lineEdit_9);


        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QCoreApplication::translate("edit", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("edit", "edit", nullptr));
        editbutton->setText(QCoreApplication::translate("edit", "edit", nullptr));
        label->setText(QCoreApplication::translate("edit", "username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
