#include <iostream>
#include <cmath>
using namespace std;

int ile_liczb()
{
    cout << " podaj ile liczb: ";
    int ile;
    cin >> ile;
    return ile;
}

int dzialanie()
{
    cout << "Podaj podstawe i wykladnik ";
    int a, b;
    cin >> a >> b;
    int suma = pow(a, b);
    return suma;
}

void pokaz_jednosci(int& sum)
{
    cout << (sum % 10);
    cout << endl;
}

int main()
{
    int ile = ile_liczb();
    for (int i{ 0 }; i < ile; ++i)
    {
        int suma = dzialanie();
        pokaz_jednosci(suma);
    }
}

