#ifndef CHANGEADMIN_H
#define CHANGEADMIN_H

#include <QDialog>

namespace Ui {
class changeadmin;
}

class changeadmin : public QDialog
{
    Q_OBJECT

public:
    explicit changeadmin(QWidget *parent = nullptr);
    ~changeadmin();

private slots:
    void on_btn_save_clicked();

private:
    Ui::changeadmin *ui;
};

#endif // CHANGEADMIN_H
