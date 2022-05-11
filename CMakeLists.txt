cmake_minimum_required(VERSION 3.21)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_subdirectory("${PROJECT_SOURCE_DIR}/IiPP-01" "${PROJECT_SOURCE_DIR}/IiPP-01/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/IiPP-02" "${PROJECT_SOURCE_DIR}/IiPP-02/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/IiPP-03" "${PROJECT_SOURCE_DIR}/IiPP-03/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/IiPP-04" "${PROJECT_SOURCE_DIR}/IiPP-04/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/IiPP-05" "${PROJECT_SOURCE_DIR}/IiPP-05/output")
