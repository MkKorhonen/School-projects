#include <vector>
#include <iostream>
#include <algorithm>

void print_int(int i);
int main()
{
    std::vector<int> luvut{};
    luvut.push_back(4);
    luvut.push_back(3);
    luvut.push_back(2);
    luvut.push_back(1);

    for(unsigned int i = 0; i < luvut.size(); i++)
    {
        if(i != 0) std::cout << ",";
        std::cout << luvut[i];
    }
    std::cout << std::endl << std::endl;

    bool eka = true;
    for(const int& a : luvut)
    {
        if(!eka) std::cout << ",";
        std::cout << a;
        eka = false;
    }
    std::cout << std::endl << std::endl;

    for(auto& a : luvut)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl << std::endl;

    for(std::vector<int>::const_iterator cit = luvut.begin(); cit != luvut.end(); cit++)
    {
        std::cout << *cit << " ";
    }
    std::cout << std::endl << std::endl;

    //jos halutaan pilkku
    std::vector<int>::const_iterator cit = luvut.begin();
    std::cout << *cit++;
    for(;cit != luvut.end(); cit++)
    {
        std::cout << "," << *cit;
    }
    std::cout << std::endl << std::endl;


    for(auto cit = luvut.begin(); cit != luvut.end(); cit++)
    {
        std::cout << *cit << " ";
    }
    std::cout << std::endl << std::endl;


    std::for_each(luvut.begin(), luvut.end(), print_int);
    std::cout << std::endl << std::endl;

    std::for_each(luvut.begin(), luvut.end(), [](int i){std::cout << i << " ";});
    std::cout << std::endl << std::endl;


}

void print_int(int i)
{
    std::cout << i << " ";
}
