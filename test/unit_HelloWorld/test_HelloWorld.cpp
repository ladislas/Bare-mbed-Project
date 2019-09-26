#include "gtest/gtest.h"
#include "gmock/gmock.h"
// #include "HelloWorld.h"

TEST(TestHelloWorld, firstTest) {
	int val = 4;
	EXPECT_EQ(val, 4);
	EXPECT_NE(val, 3);
}
