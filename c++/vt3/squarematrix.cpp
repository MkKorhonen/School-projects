/**
 * source file for SquareMatrix
*/

#include <sstream>
#include <stdexcept>
#include "squarematrix.h"
#include "intelement.h"



SquareMatrix::SquareMatrix()
{

}

SquareMatrix::SquareMatrix(const std::string& s)
{
    n = 0;
    std::stringstream inputstrm(s);
    int number = 0;
    int colnum = 0;
    int col = 0;
    int rows = 0;
    char c;


    //Hyv�ksyt��n 0 neli�matriisi, joka on muotoa [[]].
    if(s=="[[]]")
        return;

    //Luetaan ensimm�inen merkki ja tarkastetaan onko se "[" -merkki, jos ei niin palautetaan false
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        throw std::invalid_argument("Invalid init string");

    //Luetaan toinen merkki ja tehd��n sama homma
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        throw std::invalid_argument("Invalid init string");

    /*Annetaan muuttujan col arvoksi nolla, sen j�lkeen loopataan merkkien lukemista niin kauan, ett� l�ytyy
    kaksi ] - merkki� per�kk�in. Muuten do -while -loopissa luetaan aina rivin ensimm�inen numero ja jos se ei
    ole numero niin palautetaan false. Sitten katsotaan onko numeron j�lkeen pilkku tai ] - merkki jos rivi
    p���ttyi. Jokaisen numeron j�lkeen col -muuttujan arvo kasvaa yhdell� eli se pit�� lukua siit�, kuinka
    monta numeroa yhdell� rivill� on. Ensimm�isen rivin j�lkeen colnum -muuttujaan sy�tet��n ensimm�isen rivin
    numerojen m��r� ja siit� eteenp�in, jokaisen rivin j�lkeen tarkastetaan oliko sill� rivill� yht�paljon
    numeroita kuin ensimm�isell� rivill�. T�m�n j�lkeen col -muuttuja nollataan. Jokaisen rivin tarkastamisen
    j�lkeen rows -muuttujan arvo kasvaa yhdell� eli se laskee rivien m��r�n.*/
    col=0;
    while (c!=']')
    {
        std::vector<IntElement> rowvec;
        do
        {
            inputstrm >> number;

            if(!inputstrm.good())
                throw std::invalid_argument("Invalid init string");
            inputstrm >> c;

            if((c!= ',') && (c!= ']'))
               throw std::invalid_argument("Invalid init string");
            rowvec.push_back(number);
            col = col+1;
        }while (c != ']');

        //rivi luettu
        elements.push_back(rowvec);

        rows = rows + 1;
        if(rows==1)
            colnum = col;

        if(colnum!=col)
            throw std::invalid_argument("Invalid init string");
        col = 0;


        inputstrm >> c;
        if(inputstrm.eof())
            throw std::invalid_argument("Invalid init string");


    }

    //Tarkastetaan onko rivej� yht�paljon kuin yhdess� riviss� numeroita
    if(rows!=colnum)
        throw std::invalid_argument("Invalid init string");

    //Lopuksi katsotaan onko neli�matriisin per�ss� jotain ylim��r�ist�

    std::string tail;
    inputstrm >> tail;
    if(tail != "") throw std::invalid_argument("Invalid init string");

    //matrix ok
    n = rows;

}

SquareMatrix::~SquareMatrix()
{

}

SquareMatrix::SquareMatrix(const SquareMatrix& m)
{
    elements = m.elements;
    n = m.n;
}

SquareMatrix SquareMatrix::transpose() const
{
    SquareMatrix sqm;
    sqm.n = n;
    sqm.elements = std::vector<std::vector<IntElement>>(n);
    for(auto row = elements.begin(); row != elements.end(); row++)
    {
        auto trans_row = sqm.elements.begin();
        for(auto elem = row->begin(); elem != row->end(); elem++)
        {
            trans_row->push_back(*elem);
            trans_row++;
        }
    }
    return sqm;
}

SquareMatrix& SquareMatrix::operator+=(const SquareMatrix& m)
{
    if(n != m.n)
        throw std::invalid_argument("Square matrixes are different size");

    auto m_elements = m.elements.begin();
    for(auto& row : elements)
    {
        auto elem_m = m_elements->begin();
        for(auto& elem : row)
        {
            elem += (*elem_m);
            elem_m++;

        }
        m_elements++;
    }
    return *this;

}

SquareMatrix& SquareMatrix::operator-=(const SquareMatrix& m)
{
    if(n != m.n)
        throw std::invalid_argument("Square matrixes are different size");

    auto m_elements = m.elements.begin();
    for(auto& row : elements)
    {
        auto elem_m = m_elements->begin();
        for(auto& elem : row)
        {
            elem -= (*elem_m);
            elem_m++;

        }
        m_elements++;
    }
    return *this;

}

SquareMatrix& SquareMatrix::operator*=(const SquareMatrix& m)
{
    if(n != m.n){
        throw std::invalid_argument("Square matrixes are different size");
    }
    SquareMatrix temp{*this};
    SquareMatrix rhs = m.transpose();
    for (auto row = elements.begin(); row != elements.end(); ++row)
    {
        for(auto column = row->begin(); column != row->end(); ++column)
        {
            *column = 0;
            auto i = std::distance(elements.begin(), row);
            auto j = std::distance(row->begin(), column);

            for (int k = 0; k < n; k++)
            {
              *column += temp.elements[i][k] * rhs.elements[j][k];
            }
        }
    }


    return *this;
}

bool SquareMatrix::operator==(const SquareMatrix& m) const
{
    if(n != m.n)
        throw std::invalid_argument("Square matrixes are different size");

    auto m_elements = m.elements.begin();
    for(auto& row : elements)
    {
        auto elem_m = m_elements->begin();
        for(auto& elem : row)
        {
            if(!(elem == (*elem_m)));
                return false;
            elem_m++;

        }
        m_elements++;
    }
    return true;
}

std::string SquareMatrix::toString() const
{
    std::stringstream strm;
    strm << "[";
    for(auto& rivi : elements)
    {
        strm << "[";
        bool isFrist = true;
        for(auto& elem : rivi)
        {
            if(!isFrist)
                strm << ",";
            isFrist = false;
            strm << elem;
        }
        strm << "]";
    }
    strm << "]";
    return strm.str();

}

void SquareMatrix::print(std::ostream& os) const
{
    os << toString();
}

SquareMatrix operator+(const SquareMatrix& fqm, const SquareMatrix& sqm)
{
    SquareMatrix result(fqm);
    result += sqm;
    return result;
}

SquareMatrix operator-(const SquareMatrix& fqm, const SquareMatrix& sqm)
{
    SquareMatrix result(fqm);
    result -= sqm;
    return result;
}

SquareMatrix operator*(const SquareMatrix& fqm, const SquareMatrix& sqm)
{
    SquareMatrix result(fqm);
    result *= sqm;
    return result;
}

std::ostream& operator<<(std::ostream& os, const SquareMatrix& m)
{
    m.print(os);
    return os;
}


