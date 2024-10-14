#include "greeter.h"
#include <sstream>

Greeter::Greeter(const std::string& g)
{
    greetings.push_back(g);
}



void Greeter::addGreet(const std::string& g)
{
    greetings.push_back(g);
}

std::string Greeter::sayHello() const
{
    std::stringstream ss;
    for(const auto& greeting:greetings) {
        ss << greeting;
        if (greeting != greetings.back())
            ss << '\n';
    }
    return ss.str();
}
