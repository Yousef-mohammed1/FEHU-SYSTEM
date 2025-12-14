#ifndef FINALSCHEDULE_H
#define FINALSCHEDULE_H

#include <QDialog>

namespace Ui {
class FinalSchedule;
}

class FinalSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit FinalSchedule(QWidget *parent = nullptr);
    ~FinalSchedule();

private:
    Ui::FinalSchedule *ui;
};

#endif // FINALSCHEDULE_H
