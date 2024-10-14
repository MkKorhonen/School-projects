/**
 * Header file for SquareMatrix
*/
#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H

#include <iostream>
#include <ostream>
#include <vector>
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
         * \param s string
         * \return size of the matrix or info if it is not a square matrix
         */
        SquareMatrix(const std::string& s);

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
        * \brief default = operator
        * \param m SquareMatrix to be inserted
        */
        SquareMatrix& operator=(const SquareMatrix& m) = default;

        /**
        * \brief transpose constructor
        * \return transposed square matrix
        */
        SquareMatrix transpose() const;

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
         * \param m SquareMatrix for square matrix values
         * \return this operators value
         */
        SquareMatrix& operator*=(const SquareMatrix& m);

        /**
         * \brief default == operator
         * \param m SquareMatrix for square matrix values
         * \return this operators value
         */
        bool operator==(const SquareMatrix& m) const;

        /** \brief returns string representation of Square matrix
         * \return string representation of square matrix
         */
        std::string toString() const;

        /** \brief print operator for square matrix
         */
        void print(std::ostream& os) const;

    private:
      int n;
      std::vector<std::vector<IntElement>> elements;

};

/**
 * \brief default + operator
 * \param fqm SquareMatrix for Square matrix values
 * \param sqm SquareMatrix for Square matrix values
 * \return this operators value
 */
SquareMatrix operator+(const SquareMatrix&, const SquareMatrix&);

/**
 * \brief default - operator
 * \param fqm SquareMatrix for Square matrix values
 * \param sqm SquareMatrix for Square matrix values
 * \return this operators value
 */
SquareMatrix operator-(const SquareMatrix&, const SquareMatrix&);

/**
 * \brief default * operator
 * \param fqm SquareMatrix for Square matrix values
 * \param sqm SquareMatrix for Square matrix values
 * \return this operators value
 */
SquareMatrix operator*(const SquareMatrix&, const SquareMatrix&);

/**
 * \brief default << operator
 * \param os osteam for osteam
 * \param m SquareMatrix for Square matrix values
 * \return ostream os
 */
std::ostream& operator<<(std::ostream&, const SquareMatrix&);

#endif // SQUAREMATRIX_H_INCLUDED
