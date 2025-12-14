#ifndef FEES_H
#define FEES_H

#include <QDialog>

namespace Ui {
class fees;
}

class fees : public QDialog
{
    Q_OBJECT

public:
    explicit fees(QWidget *parent = nullptr);
    ~fees();

private:
    Ui::fees *ui;
};

#endif
