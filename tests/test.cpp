// Copyright 2020 vasiliykadikov@inbox.ru

#include <gtest/gtest.h>
#include <header.hpp>

TEST(CACHE, Test1) {
    EXPECT_EQ(array_checks(16), 32);
}
TEST(CACHE, Test2) {
    EXPECT_EQ(array_checks(576), 640);
}
TEST(CACHE, Test3) {
    EXPECT_EQ(array_checks(1792), 2048);
}
