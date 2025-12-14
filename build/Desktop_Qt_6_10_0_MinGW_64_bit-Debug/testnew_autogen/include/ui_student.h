/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;

    void setupUi(QDialog *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName("student");
        student->resize(756, 603);
        label = new QLabel(student);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 30, 171, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        layoutWidget = new QWidget(student);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 100, 671, 481));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("font-size: 15pt;"));

        verticalLayout->addWidget(pushButton_5);


        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QDialog *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Student Menu", nullptr));
        label->setText(QCoreApplication::translate("student", "student", nullptr));
        pushButton->setText(QCoreApplication::translate("student", "Student info", nullptr));
        pushButton_2->setText(QCoreApplication::translate("student", "Grades", nullptr));
        pushButton_3->setText(QCoreApplication::translate("student", "schedule", nullptr));
        pushButton_7->setText(QCoreApplication::translate("student", "Finals Schedule", nullptr));
        pushButton_4->setText(QCoreApplication::translate("student", "fees", nullptr));
        pushButton_6->setText(QCoreApplication::translate("student", "Change Password", nullptr));
        pushButton_5->setText(QCoreApplication::translate("student", "support", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
