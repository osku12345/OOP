cmake_minimum_required(VERSION 3.16)

project(viikkotehtava2 LANGUAGES C)

add_executable(viikkotehtava2 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
