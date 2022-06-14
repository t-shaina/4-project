#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])//78 commit
{
    QApplication a(argc, argv);// второй коммит
    MainWindow w;
    w.show();

    return a.exec();
}
