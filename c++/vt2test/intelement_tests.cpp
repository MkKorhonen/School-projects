/**
 *  test cases for IntElement functions
*/
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "intelement.h"

TEST_CASE("intelement test", "[intelement]")
{
    IntElement ie(5);
    IntElement ie_2(-20);
    CHECK(ie.getVal()==5);
    ie += ie_2;
    CHECK(ie.getVal()==-15);
    ie -= ie_2;
    CHECK(ie.getVal()==5);
    ie *= ie_2;
    CHECK(ie.getVal()==-100);

    IntElement summa = ie + ie_2;
    CHECK(summa.getVal()==-120);
    IntElement miinus = ie - ie_2;
    CHECK(miinus.getVal()==-80);
    IntElement kerto = ie * ie_2;
    CHECK(kerto.getVal()==2000);

    IntElement ei;
    ei.setVal(-20);
    CHECK(ei.getVal()==ie_2.getVal());


    std::cout << summa  << std::endl;
    std::cout << miinus << std::endl;
    std::cout << kerto << std::endl;
}
