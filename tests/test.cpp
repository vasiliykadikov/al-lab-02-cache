// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>

TEST(CACHE, Test1) {
    EXPECT_EQ(array_checks(16), 32);
}
TEST(CACHE, Test2) {
    EXPECT_EQ(array_checks(576), 640);
}
TEST(CACHE, Test3) {
    EXPECT_EQ(array_checks(1792), 2048);
}
