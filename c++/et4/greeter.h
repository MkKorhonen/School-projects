#ifndef GREETER_H
#define GREETER_H

#include <string>
#include <vector>
#include <memory>

class Greeter
{
    public:
        Greeter(const std::string& g);
        Greeter(const Greeter& other);
        Greeter(Greeter&& other);
        ~Greeter();
        Greeter& operator=(const Greeter& other);
        Greeter& operator=(Greeter&& other);
        void addGreet(const std::string& g);
        std::string sayHello() const;

    private:
        std::vector<std::unique_ptr<std::string>> greetings;
};

#endif // GREETER_H
