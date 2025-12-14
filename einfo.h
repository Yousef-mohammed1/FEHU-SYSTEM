#ifndef EINFO_H
#define EINFO_H

#include <QDialog>
#include "user.h"

namespace Ui {
class einfo;
}

class einfo : public QDialog
{
    Q_OBJECT

public:
    explicit einfo(QWidget *parent = nullptr);
~einfo() override;
private slots:
    void on_pushButton_clicked();

private:
    Ui::einfo *ui;
    UserData* m_currentUser;

};

#endif
