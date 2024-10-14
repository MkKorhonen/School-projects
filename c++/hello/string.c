#include <iostream>
#include <string>

using namespace std;

int main()
{
    string v;
    sting yn;
    do
    {
        cout << "Enter your name: " << endl;
        getline (cin,v);

        do
        {   cout << "Is your name " << v << "?: " << endl;
            getline (cin,yn);
            if (yn != "yes" || "no")
            {
                cout << "Type yes or no" << endl;
            }
        }while (yn != "yes" || "no");
    }while (yn == no);

    cout << "succest" << endl;

}
