cmake_minimum_required(VERSION 3.26)
project(OneClickStream_CPP)

set(CMAKE_CXX_STANDARD 17)

set(IMGUI_DIR  "" CACHE STRING "Path to imgui source code directory")

file(GLOB IMGUI_SOURCES ${IMGUI_DIR}/*.cpp)
file(GLOB IMGUI_HEADERS ${IMGUI_DIR}/*.h)

list(APPEND IMGUI_SOURCES ${IMGUI_DIR}/backends/imgui_impl_win32.cpp)
list(APPEND IMGUI_SOURCES ${IMGUI_DIR}/backends/imgui_impl_dx11.cpp)
list(APPEND IMGUI_HEADERS ${IMGUI_DIR}/backends/imgui_impl_win32.h)
list(APPEND IMGUI_HEADERS ${IMGUI_DIR}/backends/imgui_impl_dx11.h)

include_directories(${IMGUI_DIR})
include_directories(${IMGUI_DIR}/backends)
include_directories($ENV{DXSDK_DIR}/Include)

set(MY_SOURCE_CODE
        main.cpp
        gui/MainWindow.cpp
        gui/MainWindow.h
)

set(SOURCE_CODE
        ${MY_SOURCE_CODE}
        ${IMGUI_SOURCES}
)

add_executable(OneClickStream_CPP ${SOURCE_CODE})

target_link_libraries(OneClickStream_CPP d3d11 d3dcompiler dxgi dwmapi)
target_link_libraries(OneClickStream_CPP User32.lib Gdi32.lib Shell32.lib)