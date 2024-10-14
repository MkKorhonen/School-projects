#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

/**
* \class Fraction
* \brief Class for a fraction object
*/
class Fraction
{

    private:
        int up;
        int down;
    public:
        /** \brief default constructor
        */
        Fraction();
        /** \brief parametric constructor
        * \param u numerator
        * \param d denominator
        */
        Fraction(int, int);
        /** \brief copy constructor
        * \param other Fraction object to copy
        */
        Fraction(const Fraction& other) = default;
        /**  \brief destructor
        */
        virtual ~Fraction() = default;
        /** \brief return denominator of the fraction
        * \return numerator of the fraction
        */
        int getNumerator() const;
        /** \brief return denominator of the fraction
        * \return denominator of the fraction
        */
        int getDenominator() const;
        void setNumerator(int new_up);
        /** \brief sets the numerator of the fraction
        * \param new_up new value for denominator
        */
        void setDenominator(int new_down);
        Fraction& operator*=(const Fraction&);
};
/**
* \fn operator*
*\brief multication on fractions
*\param f1 multiplicant
*\param f2 multiplier
*\return the product of f1 and f2
*/
Fraction operator*(const Fraction&, const Fraction&);
std::ostream& operator<<(std::ostream&, const Fraction&);

#endif //Fraction
