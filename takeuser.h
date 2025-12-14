#ifndef TAKEUSER_H
#define TAKEUSER_H

#include <QDialog>

namespace Ui {
class takeuser;
}

class takeuser : public QDialog
{
    Q_OBJECT

public:
    explicit takeuser(QWidget *parent = nullptr);
    ~takeuser();

private:
    Ui::takeuser *ui;
};

#endif // TAKEUSER_H
