//
// Created by Pietro Zarri on 03/02/18.
//

#include "MainWindow.h"


MainWindow::MainWindow(ResourcesLoader * concreteLoader) {
    //imposta una dimensione fissa alla finestra
    this->setFixedSize(QSize(600, 400));

    //imopsta il titolo della finestra
    this->setWindowTitle("Resources loader");
    this->setFixedSize(QSize(600, 400));


    //imposta il testo di info
    text = new QLabel("Classe che carica file di risorse e aggiorna una progress bar (con QT).", this);
    text->setGeometry(QRect(QPoint(100, 60), QSize(430, 100)));
    text->setWordWrap(true);
    text->setAlignment(Qt::AlignCenter);

    //imposta il bottone
    button = new QPushButton("Load resources!", this);
    button->setGeometry(QRect(QPoint(185, 15), QSize(150, 30)));


    //imposta la progress bar
    progressBar = new QProgressBar(this);
    progressBar->setGeometry(QRect(QPoint(150, 170), QSize(300, 30)));


    //imposta il campo di testo
    textBox = new QTextEdit(this);
    textBox->setGeometry(QRect(QPoint(50, 240), QSize(500, 140)));
    textBox->setText("---> Ready to load resources!\n");
    textBox->setReadOnly(true);


    //assegna il loader alla mainwindow
    loader = concreteLoader;


    //connette il bottone alla funzione che deve attivare
    connect(button, SIGNAL (released()), this, SLOT (startLoadingResources()));
}

void MainWindow::startLoadingResources() {
    textBox->setText("");
    std::vector<const char*> files;
    files.push_back("File1.txt");
    files.push_back("file2.txt");

    loader->loadFiles(files);
}

void MainWindow::update(QString x ) {
    QString log = "File \"" + x + "\" loaded!";
    textBox->append(log);
}