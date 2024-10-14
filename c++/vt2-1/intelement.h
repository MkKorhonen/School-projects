#ifndef INTELEMENT_H_INCLUDED
#define INTELEMENT_H_INCLUDED

#include <iostream>

class IntElement
{
    public:
        IntElement();
        IntElement(int v);
        virtual ~IntElement();
        int getVal() const;
        void setVal(int v);
        IntElement& operator+=(const IntElement& i);
        //IntElement& operator-=(const IntElement& i);
        //IntElement& operator*=(const IntElement& i);


    private:
        int val;
};

IntElement operator+(const IntElement& i1, const IntElement& i2);
//IntElement operator-(const IntElement&, const IntElement&);
//IntElement operator*(const IntElement&, const IntElement&);
//std::ostream& operator<<(std::ostream&, const IntElement&);

#endif // INTELEMENT_H_INCLUDED
