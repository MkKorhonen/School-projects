/**
 * \file SquareMatrix_test file
 * \brief test cases for SquareMatrix functions
*/
#include "catch.hpp"
#include "intelement.h"
#include "squarematrix.h"

TEST_CASE("Matrix calculations","[matrix]")
{
    IntElement I11(2),I12(3),I21(-1),I22(5);
    IntElement b11(4),b12(1),b21(-2),b22(6);

    SquareMatrix sqm(I11,I12,I21,I22);
    SquareMatrix sqm_2(b11,b12,b21,b22);
    SquareMatrix sqm_3(sqm_2);
    SquareMatrix mqs;
    CHECK(sqm.toString()=="[[2,3][-1,5]]");

    sqm += sqm_2;
    CHECK(sqm.toString()=="[[6,4][-3,11]]");
    sqm -= sqm_2;
    CHECK(sqm.toString()=="[[2,3][-1,5]]");
    sqm *= sqm_2;
    CHECK(sqm.toString()=="[[2,20][-14,29]]");

    sqm_3.print(std::cout);
    CHECK(sqm_3.toString()==sqm_2.toString());
}
