#ifndef FRACTION_H
#define FRACTION_H

#include <string>
#include <iostream>
#include <memory>

/**
 * \class Fraction
 * \brief a class for fraction nunbers
 */
class Fraction
{
    public:
        /**
         * \brief default constructor
         */
        Fraction();
        /**
         * \brief parametric constructor
         * \param u denominator
         * \param d nominator
         * \throw std::invalid_argument if d is zero
         */
        Fraction(int u, int d);
        /**
        * \brief copy constructor
        * \param f fraction to be copied
        */
        Fraction(const Fraction& f);
        /**
         * \brief default destructor
         */
        Fraction(Fraction&& f); //toinen vaihtoehto kopiointiin

        virtual ~Fraction();
        /** \brief returns string representation of fraction
         * \return string representation of fraction
         */

        Fraction& operator=(const Fraction& f);
        std::string toString() const;
        int getUp() const;
        int getDown() const;
        Fraction operator*(const Fraction& f2);


    private:
        int* up;
        std::unique_ptr<int> down;
};
/**
 * \brief output operator for fraction
 * \param os output stream
 * \param f fraction to be outputted
 * \return modified output stream
 */
//Fraction operator*(const Fraction& f1, const Fraction& f2); luokan ulkopuolella
std::ostream& operator<<(std::ostream&, const Fraction& f);
#endif // FRACTION_H
