file(GLOB HEADER_LIST "${project_SOURCE_DIR}/include/project/*.h")

add_library(projectlib library.cpp ${HEADER_LIST})

target_include_directories(projectlib PUBLIC ../include)

target_compile_features(projectlib PUBLIC cxx_std_17)