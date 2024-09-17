file(GLOB HEADER_LIST "${conditionals_SOURCE_DIR}/include/conditionals/*.h")

add_library(conditionalslib calculate_grade.cpp display_message.cpp ${HEADER_LIST})

target_include_directories(conditionalslib PUBLIC ../include)

target_compile_features(conditionalslib PUBLIC cxx_std_17)