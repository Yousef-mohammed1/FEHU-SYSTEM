/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1250, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{font-size:20px;}"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:20px;}"));

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout_2->addWidget(usernameLineEdit);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(passwordLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size: 12pt"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1250, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label_3->setBuddy(passwordLineEdit);
        label_2->setBuddy(usernameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "System F E H U", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
