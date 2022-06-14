#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])//7 commit
{
    QApplication a(argc, argv);// второй коммит
    MainWindow w;
    w.show();

    return a.exec();
}
