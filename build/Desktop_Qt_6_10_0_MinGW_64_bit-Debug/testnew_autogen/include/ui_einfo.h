/********************************************************************************
** Form generated from reading UI file 'einfo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EINFO_H
#define UI_EINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_einfo
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *studentimage;

    void setupUi(QDialog *einfo)
    {
        if (einfo->objectName().isEmpty())
            einfo->setObjectName("einfo");
        einfo->resize(858, 735);
        label_4 = new QLabel(einfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 10, 328, 68));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 17pt;"));
        pushButton = new QPushButton(einfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 670, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20pt;"));
        layoutWidget = new QWidget(einfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(31, 100, 330, 541));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_5->addWidget(label_9);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_6->addWidget(label_11);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        horizontalLayout_7->addWidget(label_6);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_7->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_7);

        studentimage = new QLabel(einfo);
        studentimage->setObjectName("studentimage");
        studentimage->setGeometry(QRect(530, 140, 211, 201));

        retranslateUi(einfo);

        QMetaObject::connectSlotsByName(einfo);
    } // setupUi

    void retranslateUi(QDialog *einfo)
    {
        einfo->setWindowTitle(QCoreApplication::translate("einfo", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("einfo", "Student Info", nullptr));
        pushButton->setText(QCoreApplication::translate("einfo", "save", nullptr));
        label->setText(QCoreApplication::translate("einfo", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("einfo", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("einfo", "Birthdate", nullptr));
        label_7->setText(QCoreApplication::translate("einfo", "Student\342\200\231s Code", nullptr));
        label_9->setText(QCoreApplication::translate("einfo", "Gender", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("einfo", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("einfo", "Female", nullptr));

        label_11->setText(QCoreApplication::translate("einfo", "National ID", nullptr));
        label_6->setText(QCoreApplication::translate("einfo", "Academic Year", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("einfo", "preparation year", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("einfo", "1st year , computer", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("einfo", "2nd year , computer", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("einfo", "3rd year , computer", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("einfo", "4th year , computer ", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("einfo", "1st year , communication", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("einfo", "2nd year , communicationm", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("einfo", "3rd year , communication", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("einfo", "4th year , communication", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("einfo", "1st year ,Electrical ", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("einfo", "2nd year ,Electrical ", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("einfo", "3rd year ,Electrical ", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("einfo", "4th year , Electrical ", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("einfo", "1st year ,Medical  ", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("einfo", "2nd year , Medical ", nullptr));
        comboBox_2->setItemText(15, QCoreApplication::translate("einfo", "3rd year ,Medical ", nullptr));
        comboBox_2->setItemText(16, QCoreApplication::translate("einfo", "4th year , Medical ", nullptr));
        comboBox_2->setItemText(17, QCoreApplication::translate("einfo", "1st year . Mechanical ", nullptr));
        comboBox_2->setItemText(18, QCoreApplication::translate("einfo", "2nd year ,Mechanical ", nullptr));
        comboBox_2->setItemText(19, QCoreApplication::translate("einfo", "3rd year ,Mechanical ", nullptr));
        comboBox_2->setItemText(20, QCoreApplication::translate("einfo", "4th year ,Mechanical ", nullptr));

        studentimage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class einfo: public Ui_einfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EINFO_H
