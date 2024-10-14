#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H
#include <iostream>


class SquareMatrix
{
    public:
        SquareMatrix();
        SquareMatrix(const IntElement&, const IntElement&, const IntElement&, const IntElement&);
        SquareMatrix(const SquareMatrix&)
        virtual ~SquareMatrix();


    private:
        IntElement e11;
        IntElement e12;
        IntElement e21;
        IntElement e22;
};

SquareMatrix operator+(const SquareMatrix&);
SquareMatrix operator-(const SquareMatrix&);
SquareMatrix operator*(const SquareMatrix&);
std::ostream& operator<<(std::ostream&, const SquareMatrix&);
std:string;
#endif // SQUAREMATRIX_H
