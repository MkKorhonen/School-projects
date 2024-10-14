#ifndef INTELEMENT_H
#define INTELEMENT_H
#include <iostream>


class IntElement
{
    public:
        IntElement();

        IntElement(int v);
        virtual ~IntElement();
        int getVal() const;
        void setVal(int v);

    private:
        int Val;
};

IntElement operator+(const IntElement&);
IntElement operator-(const IntElement&);
IntElement operator*(const IntElement&);
std::ostream& operator<<(std::ostream&, const IntElement&);

#endif // INTELEMENT_H
