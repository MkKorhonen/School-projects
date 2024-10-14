#define CATCH_CONFIG_MAIN
#inluce "catch.hpp"

#include "intelement.h"

TEST_CASE("intelement test", "[intelement]")
{
    IntElement ie(5);
    IntElement ie_2(-20);
    CHECK(ie.getVal()==5);
    ie += ie_2;
    CHECK(ie.getVal()==-15);

    IntElement summa = ie + ie_2;
    CHECK(summa.getVal()==-35);
}
