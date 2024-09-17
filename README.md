# CMake Project Template

This is a template project that sets up CMake with GoogleTest as the testing framework.

Build
```
cmake -S . -B build
```

Install
```
cmake --build build
```

Test
```
cd build && ctest && cd ..
```

## Required File name changes

/apps/project.cpp\
/include/project\
/include/project/library.h\
/src/library.cpp\
/tests/library_test.cpp

## Required Changes in Files

When using in a regular project, the following needs to be changed:

### ./CMakeLists.txt

Line 3 Change Project to {projectname} and add a description

### ./apps/

Line 1 Change project and project.cpp to {projectname} and main app cpp name

Line 3 Change project to {projectname}

### ./src/

Line 1 - Change /include/project to /include/{projectname}

Line 3 - Change projectlib to {projectname}lib and change library.cpp to {libraryname}.cpp, be sure to add any additional libraries here.

Line 5 - Change projectlib to {projectname}lib

Line 7 - Change projectlib to {projectname}lib

### ./tests/

Line 14 - Change projectlib to {projectname}lib

Line 25 - Change libtest and library_test to library file name
