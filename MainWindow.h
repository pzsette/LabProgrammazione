//
// Created by Pietro Zarri on 03/02/18.
//

#ifndef LAB_PROGRAMMAZIONE_MAINWINDOW_H
#define LAB_PROGRAMMAZIONE_MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QLabel>

//classe che gestisce la grafica della applicazione

class MainWindow : public QMainWindow {
public:
    MainWindow ();

private:
    QLabel * text;


};


#endif //LAB_PROGRAMMAZIONE_MAINWINDOW_H
