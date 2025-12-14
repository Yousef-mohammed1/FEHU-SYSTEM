/********************************************************************************
** Form generated from reading UI file 'fees.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEES_H
#define UI_FEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fees
{
public:
    QLabel *label_9;
    QWidget *widget;
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
    QLabel *label_8;
    QLabel *label_7;

    void setupUi(QDialog *fees)
    {
        if (fees->objectName().isEmpty())
            fees->setObjectName("fees");
        fees->resize(740, 501);
        label_9 = new QLabel(fees);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(340, 20, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("font : 16pt;\n"
""));
        widget = new QWidget(fees);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 80, 561, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_3->addWidget(label_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_4->addWidget(label_8);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font-size: 16pt;"));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(fees);

        QMetaObject::connectSlotsByName(fees);
    } // setupUi

    void retranslateUi(QDialog *fees)
    {
        fees->setWindowTitle(QCoreApplication::translate("fees", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("fees", "Fees", nullptr));
        label->setText(QCoreApplication::translate("fees", "Receipt Date", nullptr));
        label_4->setText(QCoreApplication::translate("fees", "jvdueue", nullptr));
        label_2->setText(QCoreApplication::translate("fees", "Receipt number", nullptr));
        label_5->setText(QCoreApplication::translate("fees", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("fees", "Type of fee", nullptr));
        label_6->setText(QCoreApplication::translate("fees", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("fees", "Value", nullptr));
        label_7->setText(QCoreApplication::translate("fees", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fees: public Ui_fees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEES_H
