#include <iostream>
#include <rock_activate_cxx11/Dummy.hpp>

int main(int argc, char** argv)
{
    rock_activate_cxx11::DummyClass dummyClass;
    dummyClass.welcome();

    // Do something C++11-ish
    auto var = 10;
    return 0;
}
