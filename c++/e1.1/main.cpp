#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "isint.h"

TEST_CASE("Test for correct inputs", "[correct]")
{
    CHECK(isIntPair("(1,2)"));
    CHECK(isIntPair("(100,200)"));
}

TEST_CASE("Test for incorrect inputs", "[incorrect]")
{
    CHECK_FALSE(isIntPair("(100000,0)"));
    CHECK_FALSE(isIntPair("(pekka,maija)"));
    CHECK_FALSE(isIntPair("(3,4)j"));
    CHECK_FALSE(isIntPair("(1,2,3)"));
    CHECK_FALSE(isIntPair("(1.3)"));
}

/*int main()
{
    std::string nimi;
    std::cout << "Anna nimesi: " << std::endl;
    std::cin >> nimi;
    std::string tervehdys = "Terve " + nimi + "!";
    std::cout << tervehdys << std::endl;
    return 0;
}*/
