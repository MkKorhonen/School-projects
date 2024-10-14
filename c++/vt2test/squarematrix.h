/**
 * Header file for SquareMatrix
*/
#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H

#include <iostream>
#include <ostream>
#include "intelement.h"

/**
 * \class SquareMatrix
 * \brief a class for IntElement numbers
 */
class SquareMatrix
{
    public:
        /**
         * \brief default constructor
         */
        SquareMatrix();

        /**
         * \brief parametric constructor
         * \param i11 IntElement
         * \param i12 IntElement
         * \param i21 IntElement
         * \param i22 IntElement
         */
        SquareMatrix(const IntElement& I11, const IntElement& I12, const IntElement& I21,const IntElement& I22);

        /**
         * \brief default destructor
         */
        ~SquareMatrix();

        /**
        * \brief copy constructor
        * \param m SquareMatrix to be copied
        */
        SquareMatrix(const SquareMatrix& m);

        /**
         * \brief default += operator
         * \param m SquareMatrix for square matrix values
         * \return this operators value
         */
        SquareMatrix& operator+=(const SquareMatrix& m);

        /**
         * \brief default -= operator
         * \param m SquareMatrix for square matrix values
         * \return this operators value
         */
        SquareMatrix& operator-=(const SquareMatrix& m);

        /**
         * \brief default *= operator
         * \param m SquareMatrix for SquareMatrix values
         * \return this operators value
         */
        SquareMatrix& operator*=(const SquareMatrix& m);

        /** \brief returns string representation of Square matrix
         * \return string representation of square matrix
         */
        std::string toString() const;

        /** \brief print operator for square matrix
         */
        void print(std::ostream& os);

    private:
        IntElement e11;
        IntElement e12;
        IntElement e21;
        IntElement e22;

};

#endif // SQUAREMATRIX_H_INCLUDED
