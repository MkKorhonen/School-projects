#ifndef SQUAREMATRIX_H_INCLUDED
#define SQUAREMATRIX_H_INCLUDED

#include <iostream>
class squarematrix
{
    public:
        squarematrix();
        squarematrix(const intelement& i11, const intelement& i12, const intelement& i21,const intelement& i22);
        ~squarematrix;
        squarematrix(const squarematrix& m);
        squarematrix operator+=(const squarematrix& m);
        squarematrix operator-=(const squarematrix& m);
        squarematrix operator*=(const squarematrix& m);
        std::string toString() const;
        void print std::ostream const;

    private:
        intelement e11;
        intelement e12;
        intelement e21;
        intelement e22;

};

#endif // SQUAREMATRIX_H_INCLUDED
