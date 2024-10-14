#include "IntElement.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

IntElement::IntElement():IntElement{1}
{
    //ctor
}

IntElement::IntElement(int v) : Val{v}
{
    //dtor
}

int IntElement::getVal() const
{
    return Val;
}

void IntElement::setVal(int v)
{
    Val = v;
}

IntElement operator+(const IntElement& i)
{
    IntElement prod{i};
    return prod;
}

IntElement operator-(const IntElement& i)
{
    IntElement prod{i};
    return prod;
}

IntElement operator*(const IntElement& i)
{
    IntElement prod{i};
    return prod;
}

std::ostream& operator<<(std::ostream& os, const IntElement& f)
{
    os << f.getVal();
    return os;
}
