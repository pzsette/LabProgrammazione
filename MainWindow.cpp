//
// Created by Pietro Zarri on 03/02/18.
//

#include "MainWindow.h"


MainWindow::MainWindow() {
    this->setFixedSize(QSize(600, 400));

    text = new QLabel ("Testo di prova", this);
    text->setGeometry(0, 0, 100, 30);

}