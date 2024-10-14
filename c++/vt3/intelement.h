/**
 * header file for IntElement
*/

#ifndef INTELEMENT_H_INCLUDED
#define INTELEMENT_H_INCLUDED

#include <iostream>

/**
 * \class IntElement
 * \brief a class for IntElement numbers
 */
class IntElement
{
    public:

        /**
         * \brief default constructor
         */
        IntElement();

        /**
         * \brief parametric constructor
         * \param v values IntElement
         */
        IntElement(int v);

        /**
         * \brief default destructor
         */
        virtual ~IntElement();

        /**
         * \brief default getter for int value
         * \return int value
         */
        int getVal() const;

        /**
         * \brief default setter
         * \param int v value
         */
        void setVal(int v);

        /**
         * \brief default += operator
         * \param i IntElement for IntElement values
         * \return this operators value
         */
        IntElement& operator+=(const IntElement& i);

        /**
         * \brief default -= operator
         * \param i IntElement for IntElement values
         * \return this operators value
         */
        IntElement& operator-=(const IntElement& i);

        /**
         * \brief default *= operator
         * \param i IntElement for IntElement values
         * \return this operators value
         */
        IntElement& operator*=(const IntElement& i);

        /**
         * \brief default == operator
         * \param i IntElement for IntElement values
         */
        bool operator==(const IntElement& i) const;


    private:
        int val;
};

/**
 * \brief default + operator
 * \param i1 IntElement for IntElement values
 * \param i2 IntElement for IntElement values
 * \return this operators value
 */
IntElement operator+(const IntElement&, const IntElement&);

/**
 * \brief default - operator
 * \param i1 IntElement for IntElement values
 * \param i2 IntElement for IntElement values
 * \return this operators value
 */
IntElement operator-(const IntElement&, const IntElement&);

/**
 * \brief default * operator
 * \param i1 IntElement for IntElement values
 * \param i2 IntElement for IntElement values
 * \return this operators value
 */
IntElement operator*(const IntElement&, const IntElement&);

/**
 * \brief default << operator
 * \param os ostream for ostream values
 * \param i IntElement for IntElement values
 * \return ostream os
 */
std::ostream& operator<<(std::ostream&, const IntElement&);


#endif // INTELEMENT_H_INCLUDED
