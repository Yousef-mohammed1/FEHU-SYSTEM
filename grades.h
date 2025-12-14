#ifndef GRADES_H
#define GRADES_H

#include <QDialog>

namespace Ui {
class grades;
}

class grades : public QDialog
{
    Q_OBJECT

public:

    explicit grades(QWidget *parent = nullptr);


    ~grades() override;

private:
    Ui::grades *ui;

};

#endif
