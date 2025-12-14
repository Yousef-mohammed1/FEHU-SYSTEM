/********************************************************************************
** Form generated from reading UI file 'changeadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEADMIN_H
#define UI_CHANGEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeadmin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_old;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_new;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_confirm;
    QPushButton *btn_save;
    QLabel *label_title;

    void setupUi(QDialog *changeadmin)
    {
        if (changeadmin->objectName().isEmpty())
            changeadmin->setObjectName("changeadmin");
        changeadmin->resize(400, 300);
        layoutWidget = new QWidget(changeadmin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 80, 321, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_old = new QLineEdit(layoutWidget);
        lineEdit_old->setObjectName("lineEdit_old");
        lineEdit_old->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(lineEdit_old);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_new = new QLineEdit(layoutWidget);
        lineEdit_new->setObjectName("lineEdit_new");
        lineEdit_new->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_new);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_confirm = new QLineEdit(layoutWidget);
        lineEdit_confirm->setObjectName("lineEdit_confirm");
        lineEdit_confirm->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineEdit_confirm);


        verticalLayout->addLayout(horizontalLayout_3);

        btn_save = new QPushButton(changeadmin);
        btn_save->setObjectName("btn_save");
        btn_save->setGeometry(QRect(140, 240, 111, 31));
        label_title = new QLabel(changeadmin);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(90, 20, 221, 41));
        label_title->setStyleSheet(QString::fromUtf8("font-size: 18pt; font-weight: bold;"));

        retranslateUi(changeadmin);

        QMetaObject::connectSlotsByName(changeadmin);
    } // setupUi

    void retranslateUi(QDialog *changeadmin)
    {
        changeadmin->setWindowTitle(QCoreApplication::translate("changeadmin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changeadmin", "Old Password:", nullptr));
        label_2->setText(QCoreApplication::translate("changeadmin", "New Password:", nullptr));
        label_3->setText(QCoreApplication::translate("changeadmin", "Confirm:", nullptr));
        btn_save->setText(QCoreApplication::translate("changeadmin", "Save", nullptr));
        label_title->setText(QCoreApplication::translate("changeadmin", "Change Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeadmin: public Ui_changeadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEADMIN_H
