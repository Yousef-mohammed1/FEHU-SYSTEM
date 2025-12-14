/********************************************************************************
** Form generated from reading UI file 'admingrades.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGRADES_H
#define UI_ADMINGRADES_H

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

class Ui_AdminGrades
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name_sub1;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *name_sub2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *name_sub3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *name_sub4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *name_sub5;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QPushButton *saveButton;

    void setupUi(QDialog *AdminGrades)
    {
        if (AdminGrades->objectName().isEmpty())
            AdminGrades->setObjectName("AdminGrades");
        AdminGrades->resize(954, 707);
        layoutWidget = new QWidget(AdminGrades);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 150, 401, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        name_sub1 = new QLineEdit(layoutWidget);
        name_sub1->setObjectName("name_sub1");
        name_sub1->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));

        horizontalLayout->addWidget(name_sub1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        name_sub2 = new QLineEdit(layoutWidget);
        name_sub2->setObjectName("name_sub2");
        name_sub2->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));

        horizontalLayout_2->addWidget(name_sub2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        name_sub3 = new QLineEdit(layoutWidget);
        name_sub3->setObjectName("name_sub3");
        name_sub3->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));

        horizontalLayout_3->addWidget(name_sub3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        name_sub4 = new QLineEdit(layoutWidget);
        name_sub4->setObjectName("name_sub4");
        name_sub4->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));

        horizontalLayout_4->addWidget(name_sub4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        name_sub5 = new QLineEdit(layoutWidget);
        name_sub5->setObjectName("name_sub5");
        name_sub5->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));

        horizontalLayout_5->addWidget(name_sub5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        label_4 = new QLabel(AdminGrades);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 50, 171, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        saveButton = new QPushButton(AdminGrades);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(430, 650, 101, 41));
        saveButton->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));

        retranslateUi(AdminGrades);

        QMetaObject::connectSlotsByName(AdminGrades);
    } // setupUi

    void retranslateUi(QDialog *AdminGrades)
    {
        AdminGrades->setWindowTitle(QCoreApplication::translate("AdminGrades", "Dialog", nullptr));
        name_sub1->setPlaceholderText(QCoreApplication::translate("AdminGrades", "Subject 1 Name", nullptr));
        name_sub2->setPlaceholderText(QCoreApplication::translate("AdminGrades", "Subject 2 Name", nullptr));
        name_sub3->setPlaceholderText(QCoreApplication::translate("AdminGrades", "Subject 3 Name", nullptr));
        name_sub4->setPlaceholderText(QCoreApplication::translate("AdminGrades", "Subject 4 Name", nullptr));
        name_sub5->setPlaceholderText(QCoreApplication::translate("AdminGrades", "Subject 5 Name", nullptr));
        label_4->setText(QCoreApplication::translate("AdminGrades", "Grades", nullptr));
        saveButton->setText(QCoreApplication::translate("AdminGrades", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminGrades: public Ui_AdminGrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGRADES_H
