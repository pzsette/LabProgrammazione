//
// Created by Pietro Zarri on 04/02/18.
//

#include "ResourcesLoader.h"

ResourcesLoader::ResourcesLoader() {
    numOfResources = 0;
}

void ResourcesLoader::registerObserver(Observer *o) {
    observers.push_back(o);
}

void ResourcesLoader::removeObserver(Observer *o) {
    observers.remove(o);
}

void ResourcesLoader::notifyObserver() const {
    for (const auto &itr : observers) {
        //itr->update();
        itr->update(fileName);
    }
}

void ResourcesLoader::loadFiles(std::vector<const char *> fileNames) throw(std::runtime_error) {
    try {
        numOfResources = int(fileNames.size());
        if (numOfResources == 0) {
            throw std::runtime_error("No resouces detected!");
        }
    } catch(std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    for (auto& itr : fileNames) {
        handleFile(itr);
    }
}

void ResourcesLoader::handleFile(const char * itr) {
    File file(itr);
    fileName = QString(itr);
    fileSize = file.getFileSizeInBytes();
    loadingCompleted = true;
    notifyObserver();
}