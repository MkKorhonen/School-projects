#ifndef GREETER_H
#define GREETER_H

#include <string>
#include <vector>

class Greeter
{
    public:
        Greeter(const std::string& g);
        void addGreet(const std::string& g);
        std::string sayHello() const;

    private:
        std::vector<std::string> greetings;
};

#endif // GREETER_H
