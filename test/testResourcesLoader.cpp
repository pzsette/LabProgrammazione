//
// Created by Pietro Zarri on 09/02/18.
//
#include "../ResourcesLoader.h"
#include "gtest/gtest.h"


TEST(testLoadResources, testNoFileNamesProvided) {
    std::vector<const char*> vector;
    ResourcesLoader loader;
    loader.loadFiles(vector);
    ASSERT_EQ(loader.getNumOfResources(), 0);
}

TEST(testLoadResources, fileNamesProvided) {
    std::vector<const char*> vector;
    vector.push_back("anything");
    ResourcesLoader loader;
    loader.loadFiles(vector);
    ASSERT_FALSE(loader.getNumOfResources()==0);
}