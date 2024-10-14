/**
 * source file for IntElement
*/
#include "intelement.h"

IntElement::IntElement():val(0)
{

}

IntElement::IntElement(int v):val(v)
{

}

IntElement::~IntElement()
{

}

int IntElement::getVal() const
{
    return val;
}

void IntElement::setVal(int v)
{
    val = v;
}

IntElement& IntElement::operator+=(const IntElement& i)
{
    val += i.val;
    return *this;
}

IntElement& IntElement::operator-=(const IntElement& i)
{
    val -= i.val;
    return *this;
}

IntElement& IntElement::operator*=(const IntElement& i)
{
    val *= i.val;
    return *this;
}

 bool IntElement::operator==(const IntElement& i) const
 {
    return val == i.val;
 }

IntElement operator+(const IntElement& i1, const IntElement& i2)
{
    IntElement tulos = i1;
    tulos += i2;
    return tulos;
}

IntElement operator-(const IntElement& i1, const IntElement& i2)
{
    IntElement miinus = i1;
    miinus -= i2;
    return miinus;
}

IntElement operator*(const IntElement& i1, const IntElement& i2)
{
    IntElement kerto = i1;
    kerto *= i2;
    return kerto;
}

std::ostream& operator<<(std::ostream& os, const IntElement& i)
{
    os << i.getVal();
    return os;
}


