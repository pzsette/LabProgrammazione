//
// Created by Pietro Zarri on 09/02/18.
//

#include "../File.h"
#include "gtest/gtest.h"

TEST(testFile, testNonExistentResource) {
    ASSERT_THROW(File file("non_existing_file.jpg"), std::runtime_error);
}

TEST(testFile, testExistentResource) {
    ASSERT_NO_THROW(File file("gatto.jpg"));
}

TEST(testFile, testSizeForExistentFile) {
    File file("florence.jpg");
    ASSERT_FALSE(file.getFileSizeInBytes() == 0);
}