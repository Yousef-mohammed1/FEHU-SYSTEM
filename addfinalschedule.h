#ifndef ADDFINALSCHEDULE_H
#define ADDFINALSCHEDULE_H

#include <QDialog>
// to handle the motion
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include "user.h"

namespace Ui {
class AddFinalSchedule;
}

class AddFinalSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit AddFinalSchedule(QWidget *parent = nullptr);
    ~AddFinalSchedule();

protected:
    // buttons to handle the motion of the drop and drag
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    void on_btn_save_clicked();

private:
    Ui::AddFinalSchedule *ui;
    UserData* m_currentUser;
    QString m_selectedImagePath; //to save the dragged photo's path
};

#endif
