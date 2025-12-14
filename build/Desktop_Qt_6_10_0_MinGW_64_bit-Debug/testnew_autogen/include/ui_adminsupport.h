/********************************************************************************
** Form generated from reading UI file 'adminsupport.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSUPPORT_H
#define UI_ADMINSUPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSupport
{
public:
    QPushButton *pushButton;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *adminSupport)
    {
        if (adminSupport->objectName().isEmpty())
            adminSupport->setObjectName("adminSupport");
        adminSupport->resize(1139, 604);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminSupport->sizePolicy().hasHeightForWidth());
        adminSupport->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(adminSupport);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(458, 538, 191, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font : 12pt;"));
        label_5 = new QLabel(adminSupport);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(480, 30, 221, 51));
        label_5->setStyleSheet(QString::fromUtf8("font : 18pt;"));
        layoutWidget = new QWidget(adminSupport);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 401, 911, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("font : 14pt;"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        layoutWidget1 = new QWidget(adminSupport);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(13, 253, 931, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("font : 14pt;"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("font :12pt;"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        retranslateUi(adminSupport);

        QMetaObject::connectSlotsByName(adminSupport);
    } // setupUi

    void retranslateUi(QDialog *adminSupport)
    {
        adminSupport->setWindowTitle(QCoreApplication::translate("adminSupport", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("adminSupport", "seen", nullptr));
        label_5->setText(QCoreApplication::translate("adminSupport", " Edit Support", nullptr));
        label_3->setText(QCoreApplication::translate("adminSupport", "The Problem is:", nullptr));
        label_2->setText(QCoreApplication::translate("adminSupport", "Problem Categorey", nullptr));
        label->setText(QCoreApplication::translate("adminSupport", "INSERT CATEGOREY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminSupport: public Ui_adminSupport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSUPPORT_H
