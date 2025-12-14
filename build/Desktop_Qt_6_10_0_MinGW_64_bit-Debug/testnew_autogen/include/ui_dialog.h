/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *studentimage;
    QLabel *label_15;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLabel *label_13;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(805, 785);
        studentimage = new QLabel(Dialog);
        studentimage->setObjectName("studentimage");
        studentimage->setGeometry(QRect(520, 90, 251, 261));
        label_15 = new QLabel(Dialog);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(350, 20, 281, 41));
        label_15->setStyleSheet(QString::fromUtf8("font : 16pt;"));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 82, 391, 681));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_5->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        horizontalLayout_6->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        horizontalLayout_7->addWidget(label_14);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        studentimage->setText(QString());
        label_15->setText(QCoreApplication::translate("Dialog", "Student's Info", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Address", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Birthdate", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Student\342\200\231s Code", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "Gender", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "National ID", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "Academic Year", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
