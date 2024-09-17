#include "pch.h"
#include <conditionals/display_message.h>

std::string test_messageA{ "Good job, you got an A!" };
std::string test_messageB{ "Alright, you got a B!" };
std::string test_messageC{ "Not bad, you got a C!" };
std::string test_messageD{ "You can do it, you got a D!" };
std::string test_messageF{ "You'll get it next time, you got an F" };

TEST(DisplayCorrectMessage, A) {
    EXPECT_TRUE(display_message('A') == test_messageA);
}

TEST(DisplayCorrectMessage, B) {
    EXPECT_TRUE(display_message('B') == test_messageB);
}

TEST(DisplayCorrectMessage, C) {
    EXPECT_TRUE(display_message('C') == test_messageC);
}

TEST(DisplayCorrectMessage, D) {
    EXPECT_TRUE(display_message('D') == test_messageD);
}

TEST(DisplayCorrectMessage, F) {
    EXPECT_TRUE(display_message('F') == test_messageF);
}