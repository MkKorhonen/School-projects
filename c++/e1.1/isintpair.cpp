#include <sstream>
#include "isint.h"
bool isIntPair(const std::string& in)
{
    std::stringstream ss;
    ss << in;

    char delim;
    ss >> delim;
    if(delim != '(') return false;


    int first;
    ss >> first;
    if(!ss.good()) return false;

    ss >> delim;
    if(delim != ',') return false;

    int second;
    ss >> second;
    if(!ss.good()) return false;

    ss >> delim;
    if(delim != ')') return false;

    std::string tail;
    ss >> tail;
    if(tail != ""){ return false; }

    return true;
}
