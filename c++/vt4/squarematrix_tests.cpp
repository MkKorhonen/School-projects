/**
 * \file SquareMatrix_test file
 * \brief test cases for SquareMatrix functions
*/
#include "catch.hpp"
#include "intelement.h"
#include "squarematrix.h"
#include <stdexcept>

TEST_CASE("SquareMatrix legality","[matrix]")
{
    CHECK_NOTHROW(SquareMatrix("[[1]]"));
    CHECK_NOTHROW(SquareMatrix("[[1,2][3,4]]"));
    CHECK_NOTHROW(SquareMatrix("[[1,3,4][3,7,8][-2,4,5]]"));
    CHECK_THROWS(SquareMatrix("][1,2][3,4]]"));
    CHECK_THROWS(SquareMatrix("[[1,2][3,4]"));
    CHECK_THROWS(SquareMatrix("[[,2][3,4]]"));
    CHECK_THROWS(SquareMatrix("[[1,2][h,4]]"));
    CHECK_THROWS(SquareMatrix("[[1,2,5][3,4,8]]"));
    CHECK_THROWS(SquareMatrix("[1,2][3,4]]"));

}

TEST_CASE("SquareMatrix etsting","[matrix]")
{
    SquareMatrix sq1("[[1,2][3,4]]");
    SquareMatrix sq2("[[5,3][7,-3]]");
    SquareMatrix sq4("[[5,4][2,5]]");
    SquareMatrix sq5("[[1,2,3][4,5,6][7,8,9]]");
    SquareMatrix sqC(sq2);
    CHECK(sq1.toString()=="[[1,2][3,4]]");
    CHECK(sq1.transpose().toString()=="[[1,3][2,4]]");

    sq1+=sq2;
    CHECK(sq1.toString()=="[[6,5][10,1]]");
    sq1-=sq2;
    CHECK(sq1.toString()=="[[1,2][3,4]]");
    sq1*=sq2;
    CHECK(sq1.toString()=="[[19,-3][43,-3]]");
    sq4==sq2;
    CHECK(sq4.toString()=="[[5,4][2,5]]");
    CHECK_THROWS(sq5+=sq1);
    CHECK_THROWS(sq5-=sq1);
    CHECK_THROWS(sq5*=sq1);
    CHECK_FALSE(sq5==sq1);


    SquareMatrix sq3 = sq1 + sq2;
    CHECK(sq3.toString()=="[[24,0][50,-6]]");
    sq3 = sq1 - sq2;
    CHECK(sq3.toString()=="[[14,-6][36,0]]");
    sq3 = sq1 * sq2;
    CHECK(sq3.toString()=="[[74,66][194,138]]");

    sqC.print(std::cout);
    CHECK(sqC.toString()==sq2.toString());

}
