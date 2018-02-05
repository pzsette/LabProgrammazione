//
// Created by Pietro Zarri on 03/02/18.
//

#include "MainWindow.h"


MainWindow::MainWindow(ResourcesLoader * concreteLoader) {
    this->setFixedSize(QSize(600, 400));
    text = new QLabel ("Testo di prova", this);
    text->setGeometry(0, 0, 100, 30);

    loader = concreteLoader;
}

void MainWindow::startLoadingResources() {
    std::vector<const char*> files;
    files.push_back("File1.txt");

    loader->loadFiles(files);
}

void MainWindow::update() {
    std::cout << "Test file caricato" << std::endl;
}