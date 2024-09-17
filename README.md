# Conditionals Assignment

For this assignment we will be utilizing if and switch statements. First you will calculate a grade average using 4 floating point grade values, then return the letter grade character for that average. With that letter grade, you will then return a message to the user. The exact specifications are as follows:

| Grade | Letter |
|-----|------|
| >= 90 | A |
| >= 80 | B |
| >= 70 | C |
| >= 60 | D |
| < 60 | F |

Make sure the letter grade you return is a capital character, (defined as 'A')

With the letter grade, you will print the following messages:

A => Good job, you got an A! \
B => Alright, you got a B! \
C => Not bad, you got a C! \
D => You can do it, you got a D! \
F => You'll get it next time, you got an F

These messages are stored in string variables that are in display_message.cpp, as:

messageA, messageB, messageC, messageD, messageF 

You can use those variables to define the output in your switch.

I have set up two function files for you to use, calculate_grade.cpp and display_message.cpp in src. You just need to fill in the logic for each function.

## How to build, compile, and test

Instead of using the CMake buttons, I have found that it is easier to read the tests when building, compiling, and testing on the command line. To do that you can press ctrl+` to open the terminal, then enter the following:

Build
```
cmake -S . -B build
```

Compile
```
cmake --build build
```

Test
```
ctest --test-dir build
```
