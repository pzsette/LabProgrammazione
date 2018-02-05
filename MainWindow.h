//
// Created by Pietro Zarri on 03/02/18.
//

#ifndef LAB_PROGRAMMAZIONE_MAINWINDOW_H
#define LAB_PROGRAMMAZIONE_MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QLabel>
#include "ResourcesLoader.h"
#include "Observer.h"

//classe che gestisce la grafica della applicazione

class MainWindow : public QMainWindow, public Observer {
public:
    MainWindow (ResourcesLoader * loader);

    virtual ~MainWindow() {
        loader->removeObserver(this);
    }

    ResourcesLoader* getResouceLoader () {
        return loader;
    }

    virtual void update() override ;

    void startLoadingResources ();

private:
    QLabel * text;
    ResourcesLoader * loader;
};


#endif //LAB_PROGRAMMAZIONE_MAINWINDOW_H
