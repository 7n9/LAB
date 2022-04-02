cmake_minimum_required(VERSION 3.21)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_subdirectory("${PROJECT_SOURCE_DIR}/Lab-01" "${PROJECT_SOURCE_DIR}/Lab-01/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/Lab-02" "${PROJECT_SOURCE_DIR}/Lab-02/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/Lab-03" "${PROJECT_SOURCE_DIR}/Lab-03/output")
