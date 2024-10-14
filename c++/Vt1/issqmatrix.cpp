//korkattu versio
#define CATCH_CONFIG_MAIN
#include "issqmatrix.h"
#include <sstream>
#include "catch.hpp"
#include <iostream>

bool isSquareMatrix(const std::string& sqm){
    std::stringstream ss;
    ss << sqm;
    char c=0;
    int a = 0;
    int n = -1;
    ss >> c;
    if(c != '[') return false;
    ss >> c;
    if(!ss.good()) return false;
    int rows = 0;
    while(ss.good() && c != ']')
    {
        if(!ss.good() || c != '[') return false;
        int cols = 0;
        while(c != ']')
        {
            ss >> a;
            if(!ss.good()) return false;
            ss >> c;
            if(!ss.good() || (c != ',' && c != ']')) return false;
            cols++;
        }
        if(n == -1)
        {
            n = cols;
        }
        else if(n != cols)
        {
            return false;
        }
        ss >> c;
        if(!ss.good() || (c != '[' && c != ']')) return false;
        rows++;
    }
    if(n!= rows) return false;
    std::string tail;
    ss >> tail;
    if(tail.size() != 0) return false;
    return true;

}

TEST_CASE("Neliömatriisitestit", "[matriisi]"){
    CHECK(isSquareMatrix("[[1,2,3][4,5,6][7,8,9]]"));
    CHECK_FALSE(isSquareMatrix("[1,2,3]"));
    CHECK_FALSE(isSquareMatrix("]1,2][3,4]"));
    CHECK_FALSE(isSquareMatrix("[[1,2,3][4,5,6][7,8,9,5]]"));
    CHECK_FALSE(isSquareMatrix("[[1,2,a][4,5,6][7,8,9]]"));
    CHECK(isSquareMatrix("[[1,2,3,11][4,5,6,34][7,8,9,10][22,54,23,65]]"));
    CHECK_FALSE(isSquareMatrix("[[1,2,3][4,5,6][7,8,9]]a"));
    CHECK_FALSE(isSquareMatrix("[1,h][3,4]"));
    CHECK_FALSE(isSquareMatrix("[1,2]]3,4]"));
}
