#include "greeter.h"
#include <sstream>

Greeter::Greeter(const std::string& g)
{
    if (!g.empty()){
        greetings.push_back(std::unique_ptr<std::string>(new std::string(g)));
    }else
        throw std::runtime_error("Empty greetings string");

}

Greeter::Greeter(const Greeter& other)
{
    if(this != &other)
    {
        greetings.reserve(other.greetings.size());
        for (const auto &greeting : other.greetings)
            greetings.push_back(std::unique_ptr<std::string>(new std::string(*greeting)));
    }
}

Greeter::Greeter(Greeter&& other) : greetings{std::move(other.greetings)}
{
    greetings = std::move(other.greetings);
    other.greetings.clear();
}

Greeter::~Greeter()
{
}

Greeter& Greeter::operator=(const Greeter& other)
{
    if (this != &other)
    {
        greetings.clear();
        greetings.reserve(other.greetings.size());
        for (const auto &greeting : other.greetings)
        {
            greetings.push_back(std::unique_ptr<std::string>(new std::string(*greeting)));
        }
    }
    return *this;
}

Greeter& Greeter::operator=(Greeter&& other)
{
     if (this != &other)
    {

        greetings = std::move(other.greetings);
        other.greetings.clear();
    }
    return *this;

}

void Greeter::addGreet(const std::string& g)
{
    greetings.push_back(std::unique_ptr<std::string>(new std::string(g)));
}

std::string Greeter::sayHello() const
{
    std::stringstream ss;
    for(const auto& greeting:greetings) {
        ss << *greeting;
        if (greeting != greetings.back())
            ss << '\n';
    }
    return ss.str();
}
