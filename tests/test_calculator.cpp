#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, Addition) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
}

TEST(CalculatorTest, Multiplication) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(3, 4), 12);
    EXPECT_EQ(calc.multiply(-2, 5), -10);
}

TEST(CalculatorTest, Division) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.divide(10.0, 2.0), 5.0);
    EXPECT_DOUBLE_EQ(calc.divide(7.0, 2.0), 3.5);
} 