#include "tests.h"
#include <gtest/gtest.h>
#include "../ConEmu/helper.h"

TEST(ConEmuTest, Main) {
	const int val = 1;
	EXPECT_EQ(val, 1);
}

int main(int argc, char** argv) {
	HeapInitialize();
	initMainThread();
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}