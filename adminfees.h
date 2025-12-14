#ifndef ADMINFEES_H
#define ADMINFEES_H
#include "user.h"
#include <QDialog>

namespace Ui {
class Adminfees;
}

class Adminfees : public QDialog
{
    Q_OBJECT

public:
    explicit Adminfees(QWidget *parent = nullptr);
    ~Adminfees();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Adminfees *ui;
    UserData* m_currentUser;
};

#endif
