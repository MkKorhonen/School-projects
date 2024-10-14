#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "greeter.h"

TEST_CASE("Greeter tests", "[Greeter]")
{
    Greeter greet ("Hi world!");
    CHECK(greet.sayHello()=="Hi world!");

    greet.addGreet("Hi again!");
    CHECK(greet.sayHello()=="Hi world!\nHi again!");
    greet.addGreet("Saiyonara");
    CHECK(greet.sayHello()=="Hi world!\nHi again!\nSaiyonara");
}
