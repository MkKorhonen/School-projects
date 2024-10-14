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

    Greeter gruut = greet;
    CHECK(gruut.sayHello()=="Hi world!\nHi again!\nSaiyonara");
    gruut = gruut;
    CHECK(gruut.sayHello()=="Hi world!\nHi again!\nSaiyonara");
    Greeter Gcopy(std::move(greet));
    CHECK(Gcopy.sayHello()=="Hi world!\nHi again!\nSaiyonara");
}
