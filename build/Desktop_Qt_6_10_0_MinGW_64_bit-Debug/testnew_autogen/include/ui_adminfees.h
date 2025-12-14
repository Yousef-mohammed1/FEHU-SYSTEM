/********************************************************************************
** Form generated from reading UI file 'adminfees.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFEES_H
#define UI_ADMINFEES_H

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

class Ui_Adminfees
{
public:
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Adminfees)
    {
        if (Adminfees->objectName().isEmpty())
            Adminfees->setObjectName("Adminfees");
        Adminfees->resize(776, 592);
        label_5 = new QLabel(Adminfees);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 40, 211, 41));
        label_5->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));
        layoutWidget = new QWidget(Adminfees);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 140, 631, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout->addWidget(label_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Adminfees);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 540, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));

        retranslateUi(Adminfees);

        QMetaObject::connectSlotsByName(Adminfees);
    } // setupUi

    void retranslateUi(QDialog *Adminfees)
    {
        Adminfees->setWindowTitle(QCoreApplication::translate("Adminfees", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Adminfees", "Student\342\200\230s Fees", nullptr));
        label->setText(QCoreApplication::translate("Adminfees", "Receipt Date", nullptr));
        label_2->setText(QCoreApplication::translate("Adminfees", "Receipt Number", nullptr));
        label_4->setText(QCoreApplication::translate("Adminfees", "type of fee", nullptr));
        label_3->setText(QCoreApplication::translate("Adminfees", "Value", nullptr));
        pushButton->setText(QCoreApplication::translate("Adminfees", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminfees: public Ui_Adminfees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFEES_H
