#include <conditionals/calculate_grade.h>
#include "pch.h"

TEST(ReturnLetterGradeTest, ReturnsA) {
    EXPECT_EQ(calculate_grade(100, 90, 95, 91), 'A');
    EXPECT_EQ(calculate_grade(90, 90, 90, 90), 'A');
    EXPECT_EQ(calculate_grade(92, 92, 92, 92), 'A');
    EXPECT_EQ(calculate_grade(100, 100, 100, 100), 'A');
}

TEST(ReturnLetterGradeTest, ReturnsB) {
    EXPECT_EQ(calculate_grade(89, 89, 89, 89), 'B');
    EXPECT_EQ(calculate_grade(80, 80, 80, 80), 'B');
    EXPECT_EQ(calculate_grade(85, 85, 85, 85), 'B');
}

TEST(ReturnLetterGradeTest, ReturnsC) {
    EXPECT_EQ(calculate_grade(100, 30, 85, 100), 'C');
    EXPECT_EQ(calculate_grade(70, 60, 80, 75), 'C');
    EXPECT_EQ(calculate_grade(71, 72, 73, 78), 'C');
}

TEST(ReturnLetterGradeTest, ReturnsD) {
    EXPECT_EQ(calculate_grade(80, 20, 60, 100), 'D');
    EXPECT_EQ(calculate_grade(65, 68, 60, 63), 'D');
    EXPECT_EQ(calculate_grade(62, 69, 63, 66), 'D');
}

TEST(ReturnLetterGradeTest, ReturnsF) {
    EXPECT_EQ(calculate_grade(20, 100, 50, 42), 'F');
    EXPECT_EQ(calculate_grade(45, 92, 55, 25), 'F');
    EXPECT_EQ(calculate_grade(62, 23, 56, 65), 'F');
}