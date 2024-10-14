#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "greeter.h"



Greeter::Greeter(const std::string& g) : greetings(g)
{

}


std::string Greeter::sayHello() const
{
    return greetings;
}

TEST_CASE("Greeter tests", "[Greeter]")
{
    std::string HelloStr;
    HelloStr = "Hello world!";
    Greeter greet(HelloStr);
    CHECK(greet.sayHello() == "Hello world!");
}
