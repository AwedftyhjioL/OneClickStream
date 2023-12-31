cmake_minimum_required(VERSION 3.26)
project(OneClickStream_CPP)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /subsystem:windows")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/bin/Debug")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/bin/Release")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/bin/Debug")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/bin/Release")

set(TARGET_DEBUG_DIR "${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG}")
set(TARGET_RELEASE_DIR "${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE}")

message(STATUS "TARGET_DEBUG_DIR: ${TARGET_DEBUG_DIR}")
message(STATUS "TARGET_RELEASE_DIR: ${TARGET_RELEASE_DIR}")

#set(wxBUILD_SHARED OFF)

add_subdirectory(extern/wxWidgets)

option(USE_SYSTEM_GETTEXT "Use system-installed gettext instead of built-in" ON)
if(USE_SYSTEM_GETTEXT)
    find_package(Gettext)
endif()

if(NOT Gettext_FOUND OR NOT USE_SYSTEM_GETTEXT)
    set(GETTEXT_INCLUDE_DIR "" CACHE PATH "Path to gettext include directory")
    set(GETTEXT_LIBRARY "" CACHE FILEPATH "Path to gettext library file")

    if(NOT GETTEXT_INCLUDE_DIR OR NOT GETTEXT_LIBRARY)
        message(FATAL_ERROR "Gettext not found and no manual path specified")
    endif()

    if(NOT EXISTS "${GETTEXT_INCLUDE_DIR}")
        message(FATAL_ERROR "The specified GETTEXT_INCLUDE_DIR does not exist")
    endif()

    if(NOT EXISTS "${GETTEXT_LIBRARY}")
        message(FATAL_ERROR "The specified GETTEXT_LIBRARY does not exist")
    endif()
else()
    set(GETTEXT_INCLUDE_DIR ${Gettext_INCLUDE_DIRS})
    set(GETTEXT_LIBRARY ${Gettext_LIBRARIES})
endif()

include_directories(${GETTEXT_INCLUDE_DIR})
link_libraries(${GETTEXT_LIBRARY})



set(SOURCE_CODE
        main.cpp
        gui/MainWindow.cpp
        gui/MainWindow.h
        gui/MainFrame.cpp

        app/MainApp.cpp
        app/MainApp.h
)

set(RESOURCE_FILES
        basic/enum.h

)

add_executable(OneClickStream_CPP
        ${SOURCE_CODE}
        ${RESOURCE_FILES}
)

#target_link_libraries(OneClickStream_CPP User32.lib Gdi32.lib Shell32.lib)
target_link_libraries(OneClickStream_CPP wx::net wx::core wx::base)



message(STATUS "wxWidgets_vc_x64_dll: ${CMAKE_BINARY_DIR}/extern/wxWidgets/lib/vc_x64_dll")
message(STATUS "CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG}")
message(STATUS "CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE}")

# copy wxWidgets dll to output directory
if(WIN32)
    option(COPY_WXWIDGETS_DLL "copy wxWidgets dll to output directory" OFF)
    if(COPY_WXWIDGETS_DLL)

        set(WXWIDGETS_DLL_DIR "${CMAKE_BINARY_DIR}/extern/wxWidgets/lib/vc_x64_dll")

        file(GLOB WXWIDGETS_DLLS "${WXWIDGETS_DLL_DIR}/*.dll")

        file(MAKE_DIRECTORY ${TARGET_DEBUG_DIR})
        file(MAKE_DIRECTORY ${TARGET_RELEASE_DIR})

        add_custom_command(TARGET OneClickStream_CPP POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                ${WXWIDGETS_DLLS} ${TARGET_DEBUG_DIR})

        add_custom_command(TARGET OneClickStream_CPP POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                ${WXWIDGETS_DLLS} ${TARGET_RELEASE_DIR})

        message(STATUS "WXWIDGETS_DLL_DIR: ${WXWIDGETS_DLL_DIR}")
        message(STATUS "WXWIDGETS_DLLS: ${WXWIDGETS_DLLS}")
    endif()
endif()

# copy resource files to output directory
option(COPY_RESOURCE_FILES "copy resource files to output directory" ON)
if(COPY_RESOURCE_FILES)
    file(MAKE_DIRECTORY ${TARGET_DEBUG_DIR})
    file(MAKE_DIRECTORY ${TARGET_RELEASE_DIR})

    add_custom_command(TARGET OneClickStream_CPP POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/gui/res ${TARGET_DEBUG_DIR}/res)
    add_custom_command(TARGET OneClickStream_CPP POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/gui/res ${TARGET_RELEASE_DIR}/res)
endif()