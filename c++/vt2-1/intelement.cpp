#include "intelement.h"

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

IntElement operator+(const IntElement& i1, const IntElement& i2)
{
    IntElement tulos = i1;
    tulos += i2;
    return tulos;
}

