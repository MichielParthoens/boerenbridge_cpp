cmake_minimum_required(VERSION 3.5)

project(Boerenbridge_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Boerenbridge_cpp main.cpp
    player.h player.cpp
    computerplayer.h
    computerplayer.cpp
    humanplayer.h humanplayer.cpp
    card.h
    Card.cpp
    game.h
    game.cpp)

include(GNUInstallDirs)
install(TARGETS Boerenbridge_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
