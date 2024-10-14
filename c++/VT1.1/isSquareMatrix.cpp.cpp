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
//Tehdään str niminen stringi
bool isSquareMatrix(const std::string& str)
{
    //Tehdään int ja char muuttujia joille annetaan alkuarvoksi 0
    std::stringstream inputstrm(str);
    int number = 0;
    int colnum = 0;
    int col = 0;
    int rows = 0;
    char c;

    //Hyväksytään 0 neliömatriisi, joka on muotoa [[]].
    if(str=="[[]]")
        return true;

    //Luetaan ensimmäinen merkki ja tarkastetaan onko se "[" -merkki, jos ei niin palautetaan false
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        return false;

    //Luetaan toinen merkki ja tehdään sama homma
    inputstrm >> c;

    if(!inputstrm.good() || c != '[')
        return false;

    /*Annetaan muuttujan col arvoksi nolla, sen jälkeen loopataan merkkien lukemista niin kauan, että löytyy
    kaksi ] - merkkiä peräkkäin. Muuten do -while -loopissa luetaan aina rivin ensimmöinen numero ja jos se ei
    ole numero niin palautetaan false. Sitten katsotaan onko numeron jälkeen pilkku tai ] - merkki jos rivi
    pääättyi. Jokaisen numeron jälkeen col -muuttujan arvo kasvaa yhdellä eli se pitää lukua siitä, kuinka
    monta numeroa yhdellä rivillä on. Ensimmäisen rivin jälkeen colnum -muuttujaan syötetään ensimmäisen rivin
    numerojen määrä ja siitä eteenpäin, jokaisen rivin jälkeen tarkastetaan oliko sillä rivillä yhtäpaljon
    numeroita kuin ensimmäisellä rivillä. Tämän jälkeen col -muuttuja nollataan. Jokaisen rivin tarkastamisen
    jälkeen rows -muuttujan arvo kasvaa yhdellä eli se laskee rivien määrän.*/
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

    //Tarkastetaan onko rivejä yhtäpaljon kuin yhdessä rivissä numeroita
    if(rows!=colnum)
        return false;

    //Lopuksi katsotaan onko neliömatriisin perässä jotain ylimääräistä
    std::string tail;
    inputstrm >> tail;
    if(tail != "") return false;

    return true;
}
