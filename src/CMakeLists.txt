rock_library(rock_activate_cxx11
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_activate_cxx11_bin Main.cpp
    DEPS rock_activate_cxx11)

