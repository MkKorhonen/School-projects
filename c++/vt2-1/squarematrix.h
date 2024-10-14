/*#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H

#include <iostream>
#include <ostream>
class SquareMatrix
{
    public:
        SquareMatrix();
        SquareMatrix(const IntElement& I11, const IntElement& I12, const IntElement& I21,const IntElement& I22);
        ~SquareMatrix() = default;
        SquareMatrix(const SquareMatrix& m);
        SquareMatrix& operator+=(const SquareMatrix& m);
        SquareMatrix& operator-=(const SquareMatrix& m);
        SquareMatrix& operator*=(const SquareMatrix& m);
        std::string toString() const;
        void print(const std::ostream& os);

    private:
        IntElement e11;
        IntElement e12;
        IntElement e21;
        IntElement e22;

};

#endif // SQUAREMATRIX_H_INCLUDED
