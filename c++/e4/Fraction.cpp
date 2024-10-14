#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <sstream>
#include <stdexcept>
#include "Fraction.h"

Fraction::Fraction(int u, int d) : up{nullptr}, down{std::unique_ptr<int>{new int {d}}}//voi käyttää myös () sulkuja
{
    if(*down == 0)
        throw std::invalid_argument{"Nominator cannot be zero."};
    up = new int{u};
}

Fraction::Fraction() : Fraction{0, 1}
{
}

Fraction::Fraction(const Fraction& f) : up{f.up}, down{std::unique_ptr<int>{new int{*(f.down)}}}
{

}

Fraction::Fraction(Fraction&& f) : up(f.up), down{std::move(f.down)}
{
    f.up = nullptr;
}

Fraction& Fraction::operator=(const Fraction& f)
{
    if(this == &f) return *this;
    Fraction fcopy{f};
    std::swap(up, fcopy.up);
    std::swap(down, fcopy.down);
    return *this;
}

Fraction::~Fraction()
{
    delete up;
}

std::string Fraction::toString() const
{
    std::stringstream ss;
    ss << *up << '/' << *down;
    return ss.str();
}
int Fraction::getUp() const
  {

    return *up;
  }
int Fraction::getDown() const
{
    return *down;
}

Fraction Fraction::operator*(const Fraction& f2)
{
    Fraction prod{(*up) * f2.getUp(), (*down) * f2.getDown()};
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
    CHECK_THROWS(Fraction(1,0));
    try
    {
        Fraction f{1,0};
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
        CHECK(std::string{e.what()} == "Nominator cannot be zero.");
    }
    three8 = half;
    CHECK(three8.toString() == "1/2");
    three8 = three8;
    CHECK(three8.toString() == "1/2");
    Fraction hcopy(std::move(half));
    CHECK(hcopy.toString() == "1/2");
}
