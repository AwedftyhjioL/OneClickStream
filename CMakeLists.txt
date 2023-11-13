cmake_minimum_required(VERSION 3.26)
project(OneClickStream_CPP)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /subsystem:windows")


#set(wxBUILD_SHARED OFF)

add_subdirectory(extern/wxWidgets)


set(SOURCE_CODE
        main.cpp
        gui/MainWindow.cpp
        gui/MainWindow.h
)



add_executable(OneClickStream_CPP
        ${SOURCE_CODE}
)

#target_link_libraries(OneClickStream_CPP User32.lib Gdi32.lib Shell32.lib)
target_link_libraries(OneClickStream_CPP wx::net wx::core wx::base)