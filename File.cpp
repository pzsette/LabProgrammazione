//
// Created by Pietro Zarri on 04/02/18.
//

#include "File.h"

File::File(char *filename) {
    file = fopen(filename, "r");
    if (!file) {
        throw std::runtime_error("Could not open file!");
    } else {
        fseek(file, 0, SEEK_END);
        fileSize = int(ftell(file));
        int displayedSize = fileSize / 1024;
        std::cout << "File \"" << filename << "\" opened succesfully: size of file : " << displayedSize << "kb." << std::endl;
    }
}

File::~File() {
    if (fclose(file)) {
        throw std::runtime_error("Could not close file!");
    }
}
