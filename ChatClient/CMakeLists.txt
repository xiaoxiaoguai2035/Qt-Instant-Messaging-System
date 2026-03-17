cmake_minimum_required(VERSION 3.16)

project(ChatClient VERSION 0.1 LANGUAGES CXX)

set(CMAKE_PREFIX_PATH
    "C:/Users/86177/Downloads/thirdparty_install/vcpkg/installed/x64-windows"
    ${CMAKE_PREFIX_PATH}
)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_VERSION_MAJOR 6)
file(GLOB PB_FILES "./proto/*.proto")

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Network WebSockets  Multimedia Protobuf)

set(PROJECT_SOURCES
        main.cpp
        mainwidget.cpp
        mainwidget.h
        mainwidget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ChatClient
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        model/data.h
        resource.qrc
        sessionfriendarea.h sessionfriendarea.cpp
        debug.h
        messageshowarea.h messageshowarea.cpp
        messageeditarea.h messageeditarea.cpp
        selfinfowidget.h selfinfowidget.cpp
        userinfowidget.h userinfowidget.cpp
        sessiondetailwidget.h sessiondetailwidget.cpp
        choosefrienddialog.h choosefrienddialog.cpp
        groupsessiondetailwidget.h groupsessiondetailwidget.cpp
        addfrienddialog.h addfrienddialog.cpp
        historymessagewidget.h historymessagewidget.cpp
        loginwidget.h loginwidget.cpp
        phoneloginwidget.h phoneloginwidget.cpp
        toast.h toast.cpp
        model/datacenter.h model/datacenter.cpp
        network/netclient.h network/netclient.cpp
        verifycodewidget.h verifycodewidget.cpp
        soundrecorder.h soundrecorder.cpp
    )

qt_add_protobuf(ChatClient PROTO_FILES ${PB_FILES})

# Define target properties for Android with Qt 6 as:
#    set_property(TARGET ChatClient APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(ChatClient SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ChatClient
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(ChatClient PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt6::Network Qt6::WebSockets Qt6::Protobuf Qt6::Multimedia)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.


include(GNUInstallDirs)
install(TARGETS ChatClient
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ChatClient)
endif()
