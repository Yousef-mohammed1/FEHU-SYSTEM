#ifndef ADDSCHDULE_H
#define ADDSCHDULE_H
#include "user.h"
#include "datamanger.h"
#include <QDialog>
// to handle the motion
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>

namespace Ui {
class addschdule;
}

class addschdule : public QDialog
{
    Q_OBJECT

public:
    explicit addschdule(QWidget *parent = nullptr);
    ~addschdule();

protected:
    // buttons to handle the motion of the drop and drag
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::addschdule *ui;
    UserData* m_currentUser;
    QString m_selectedImagePath; //to save the dragged photo's path
};

#endif
