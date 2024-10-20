# qcustomplot/CMakeLists.txt
add_library(qcustomplot STATIC qcustomplot.cpp)
target_include_directories(qcustomplot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})