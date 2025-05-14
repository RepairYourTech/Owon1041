cmake_minimum_required(VERSION 3.16)
project(Owon1041)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Add Qt5 paths
set(CMAKE_PREFIX_PATH "/opt/homebrew/opt/qt@5" "C:/Qt5a/5.15.2/msvc2019_64")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        SerialPort
        Charts
        REQUIRED)

add_executable(Owon1041 main.cpp
        MainWindow.cpp
        MainWindow.h
        Settings.cpp
        Settings.h
        ConnectDialog.cpp
        ConnectDialog.h
)
target_link_libraries(Owon1041
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::SerialPort
        Qt5::Charts
)

include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${Qt5SerialPort_INCLUDE_DIRS}
    ${Qt5Charts_INCLUDE_DIRS}
    "C:/Qt5a/5.15.2/msvc2019_64/include"
)