#include "add.h"
#include "gtest/gtest.h"

TEST(SimpleMath, Add) {
  EXPECT_EQ(add(1, 2), 3);
  EXPECT_EQ(add(9, 1), 10);
}