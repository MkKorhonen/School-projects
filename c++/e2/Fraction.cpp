#define CATCH_CONFIG_MAIN
#include "Fraction.h"
#include "catch.hpp"



Fraction::Fraction() : Fraction{1,1} //alustuslista up = 1, down = 1
{
}

Fraction::Fraction(int u, int d) : up{u}, down{d}
{
}

int Fraction::getNumerator() const{
    return up;
}

int Fraction::getDenominator() const{

    return down;
}

void Fraction::setNumerator(int new_up)
{
    up = new_up;
}

void Fraction::setDenominator(int new_down)
{
    down = new_down;
}

Fraction& Fraction::operator*=(const Fraction& other)
{
    up *= other.up;
    down *= other.down;
    return *this;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    Fraction prod{f1};
    prod *= f2;
    return prod;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
    os << f.getNumerator() << "/" << f.getDenominator();
    return os;
}

TEST_CASE("Fraction getters/setters", "[Fraction][get][set]")
{
    Fraction f1;
    Fraction f2_3{2,3};
    CHECK(f1.getNumerator() == 1);
    CHECK(f1.getDenominator() == 1);
    CHECK(f2_3.getNumerator() == 2);
    CHECK(f2_3.getDenominator() == 3);
    f1.setNumerator(4);
    f1.setDenominator(5);
    CHECK(f1.getNumerator() == 4);
    CHECK(f1.getDenominator() == 5);
    Fraction f4_5{f1};
    CHECK(f4_5.getNumerator() == 4);
    CHECK(f4_5.getDenominator() == 5);
    Fraction f3 = f1*f4_5;
    std::cout << f1 << std::endl << f2_3 << std::endl << f3 << std::endl;
}
