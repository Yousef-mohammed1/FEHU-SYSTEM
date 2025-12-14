#include "mainwindow.h"
#include <QApplication>
#include "user.h"
#include "datamanger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    initializeUsers();

    MainWindow w;
    w.show();

    int result = a.exec();
    saveUsersToJson(g_jsonFileName);

    return result;
}
