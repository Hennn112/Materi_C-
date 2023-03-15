#include <iostream>
using namespace std;

int main ()
{
    int  bil;
    cout << "Input Bilangan Bulat: ";
    cin >> bil;

    if (bil % 2 == 0)
    {
    cout << "Bilangan " << bil << " adalah bilangan genap." <<endl;
    }
    else
    {
        cout << "Bilangan " << bil << " adalah bilangan ganjil." <<endl;
    }
    
}