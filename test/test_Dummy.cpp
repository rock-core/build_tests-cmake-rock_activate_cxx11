#include <boost/test/unit_test.hpp>
#include <rock_activate_cxx11/Dummy.hpp>

using namespace rock_activate_cxx11;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_activate_cxx11::DummyClass dummy;
    dummy.welcome();
}
