#ifndef ADMINSUPPORT_H
#define ADMINSUPPORT_H

#include <QDialog>
#include "user.h"
namespace Ui {
class adminSupport;
}

class adminSupport : public QDialog
{
    Q_OBJECT

public:
    explicit adminSupport(QWidget *parent = nullptr);
    ~adminSupport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminSupport *ui;
       UserData* m_currentUser;
};

#endif
