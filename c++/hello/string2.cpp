#include <iostream>
#include <string>

int main ()
{
    std::string v;
    std::string yn;
    do
    {
        std::cout << "Enter your name: ";
        getline (std::cin,v);

        do
        {   std::cout << "Is your name " << v << "?: ";
            getline (std::cin,yn);
            if ((yn != "yes") && (yn != "no"))
            {
                std::cout << "Type yes or no" << std::endl;
            }
        }while ((yn != "yes") && (yn != "no"));
    }while (yn != "yes");

    std::cout << "success" << std::endl;

}

