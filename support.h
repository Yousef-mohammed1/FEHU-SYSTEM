#ifndef SUPPORT_H
#define SUPPORT_H

#include <QDialog>
#include "user.h"
namespace Ui {
class Support;
}

class Support : public QDialog
{
    Q_OBJECT

public:
    explicit Support(QWidget *parent = nullptr);
    ~Support();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Support *ui;

};

#endif
