#ifndef ADMINGRADES_H
#define ADMINGRADES_H

#include <QDialog>
#include "user.h"

namespace Ui {
class AdminGrades;
}

class AdminGrades : public QDialog
{
    Q_OBJECT

public:
    explicit AdminGrades(QWidget *parent = nullptr);
    ~AdminGrades()override;
private slots:
    void on_saveButton_clicked();

private:
    Ui::AdminGrades *ui;
      UserData* m_currentUser;
};

#endif
