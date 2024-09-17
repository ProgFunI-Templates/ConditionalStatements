file(GLOB HEADER_LIST "${conditionals_SOURCE_DIR}/include/conditionals/*.h")

add_library(gradelib calculate_grade.cpp ${HEADER_LIST})

target_include_directories(conditionalslib PUBLIC ../include)

target_compile_features(conditionalslib PUBLIC cxx_std_17)