cmake_minimum_required(VERSION 3.16)

project(testnew VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(testnew
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        admin.h admin.cpp admin.ui
        student.h student.cpp student.ui
        dialog.h dialog.cpp dialog.ui
        globals.h globals.cpp

        datamanger.h datamanger.cpp
        user.h user.cpp
        grades.h grades.cpp grades.ui
        edit.h edit.cpp edit.ui
        einfo.h einfo.cpp einfo.ui
        schedule.h schedule.cpp schedule.ui
        fees.h fees.cpp fees.ui
        support.h support.cpp support.ui
        admingrades.h admingrades.cpp admingrades.ui
        addschdule.h addschdule.cpp addschdule.ui
        adminfees.h adminfees.cpp adminfees.ui
        adminsupport.h adminsupport.cpp adminsupport.ui
        changepassword.h changepassword.cpp changepassword.ui
        finalschedule.h finalschedule.cpp finalschedule.ui
        addfinalschedule.h addfinalschedule.cpp addfinalschedule.ui
        finalschedule.h finalschedule.cpp finalschedule.ui
              addfinalschedule.h addfinalschedule.cpp addfinalschedule.ui
              changeadmin.h changeadmin.cpp changeadmin.ui
              image.qrc



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET testnew APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(testnew SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(testnew
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(testnew PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.testnew)
endif()
set_target_properties(testnew PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS testnew
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(testnew)
endif()
