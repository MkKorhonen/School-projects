#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include <sstream>
#include "isSquareMatrix.h"

//Testi keisit

TEST_CASE("Basic matrix computations", "[matrix]")
{
    CHECK(isSquareMatrix("[[1]]"));
    CHECK(isSquareMatrix("[[1,2,3][4,5,6][7,8,9]]"));
    CHECK(isSquareMatrix("[[1,2,3,4][4,5,6,7][7,8,9,12][12,43,45,23]]"));
    CHECK(isSquareMatrix(("[[1,2][3,4]]")));
    CHECK(!isSquareMatrix("][1,2][3,4]]"));
    CHECK(!isSquareMatrix("[[1,2][3,4]]]"));
    CHECK(!isSquareMatrix("a[[1,3,4][5,9,6][7,5,4]]"));
    CHECK(!isSquareMatrix("a[[1,3,4][5,9,6][7,5,4]]a"));
    CHECK(!isSquareMatrix("[[1,3,4][9,6][7,5,4]]"));
    CHECK(!isSquareMatrix("[[1,3,4][9,6][7,5,4]5]"));
    CHECK(!isSquareMatrix(("[[1,2][3,4][5,6,7]]")));
}
//Tehd��n str niminen stringi
bool isSquareMatrix(const std::string& str)
{
    //Tehd��n int ja char muuttujia joille annetaan alkuarvoksi 0
    std::stringstream inputstrm(str);
    int number = 0;
    int colnum = 0;
    int col = 0;
    int rows = 0;
    char c;

    //Hyv�ksyt��n 0 neli�matriisi, joka on muotoa [[]].
    if(str=="[[]]")
        return true;

    //Luetaan ensimm�inen merkki ja tarkastetaan onko se "[" -merkki, jos ei niin palautetaan false
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        return false;

    //Luetaan toinen merkki ja tehd��n sama homma
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        return false;

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
        do
        {
            inputstrm >> number;

            if(!inputstrm.good())
                return false;
            inputstrm >> c;

            if((c!= ',') && (c!= ']'))
               return false;

            col = col+1;
        }while (c != ']');

        rows = rows + 1;
        if(rows==1)
            colnum = col;

        if(colnum!=col)
            return false;
        col = 0;

        inputstrm >> c;
    }

    //Tarkastetaan onko rivej� yht�paljon kuin yhdess� riviss� numeroita
    if(rows!=colnum)
        return false;

    //Lopuksi katsotaan onko neli�matriisin per�ss� jotain ylim��r�ist�
    std::string tail;
    inputstrm >> tail;
    if(tail != "") return false;

    return true;
}
