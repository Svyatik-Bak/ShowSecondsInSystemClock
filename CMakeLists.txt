cmake_minimum_required(VERSION 3.5)

project(ShowSecondsInSystemClock LANGUAGES C)

set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/icon.rc")
add_executable(ShowSecondsInSystemClock main.c SB_registry.h ${APP_ICON_RESOURCE_WINDOWS})

install(TARGETS ShowSecondsInSystemClock
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})


