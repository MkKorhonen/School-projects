/**
 * source file for SquareMatrix
*/

#include <sstream>
#include "squarematrix.h"
#include "intelement.h"

SquareMatrix::SquareMatrix()
{

}

SquareMatrix::SquareMatrix(const IntElement& I11, const IntElement& I12, const IntElement& I21,const IntElement& I22)
    :e11(I11), e12(I12), e21(I21), e22(I22)
{

}

SquareMatrix::~SquareMatrix()
{

}

SquareMatrix::SquareMatrix(const SquareMatrix& m) : e11{m.e11}, e12{m.e12}, e21{m.e21}, e22{m.e22}
{

}

SquareMatrix& SquareMatrix::operator+=(const SquareMatrix& m)
{
    e11 += m.e11;
    e12 += m.e12;
    e21 += m.e21;
    e22 += m.e22;
    return *this;

}

SquareMatrix& SquareMatrix::operator-=(const SquareMatrix& m)
{
    e11 -= m.e11;
    e12 -= m.e12;
    e21 -= m.e21;
    e22 -= m.e22;
    return *this;

}

SquareMatrix& SquareMatrix::operator*=(const SquareMatrix& m)
{

    IntElement a11(e11 * m.e11 + e12 * m.e21);
    IntElement a12(e11 * m.e12 + e12 * m.e22);
    IntElement a21(e21 * m.e11 + e22 * m.e21);
    IntElement a22(e21 * m.e12 + e22 * m.e22);
    e11 = a11;
    e12 = a12;
    e21 = a21;
    e22 = a22;
    return *this;
}

std::string SquareMatrix::toString() const
{
    std::stringstream strm;
    strm << "[[" << e11 << "," << e12 << "][" << e21 << "," << e22 << "]]";
    return strm.str();

}

void SquareMatrix::print(std::ostream& os)
{
    os << "[[" << e11 << "," << e12 << "][" << e21 << "," << e22 << "]]";
}










//[a11, a12][a21, a22] * [b11, b12][b21, b22] = [a11 * b11 + a12 * b21, a11 * b12 + a12 * b22][a21 * b11 + a22 * b21, a21 * b12 + a22 * b22]
