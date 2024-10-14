#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fraction.h"
#include <sstream>

Fraction::Fraction(int u, int d) : up{u}, down{d}//voi käyttää myös () sulkuja
{
}

Fraction::Fraction() : Fraction{0, 1}
{
}
//Fraction::Fraction(const Fraction& f) : up{f, up}, down{f, down} kopiointi

std::string Fraction::toString() const
{
    std::stringstream ss;
    ss << up << '/' << down;
    return ss.str();
}
int Fraction::getUp() const
  {

    return up;
  }
int Fraction::getDown() const
{
    return down;
}

Fraction Fraction::operator*(const Fraction& f2)
{
    Fraction prod{up * f2.getUp(), down * f2.getDown()};
    return prod;
}
std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
    os << f.toString();
    return os;
}

TEST_CASE("Fraction tests", "[Fraction]")
{
    Fraction zero;
    CHECK(zero.toString() == "0/1");
    Fraction half{1,2};
    CHECK(half.toString() == "1/2");
    Fraction threeq{3,4};
    Fraction three8 = half * threeq;
    CHECK(three8.toString() == "3/8");
    std::cout << three8 << std::endl;
}
