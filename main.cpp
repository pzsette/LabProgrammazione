#include <iostream>
#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);
    MainWindow finestra;
    finestra.show();
    return app.exec();
}