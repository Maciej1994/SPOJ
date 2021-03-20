#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool test_palindromu(string a)  
{
    for (int i = 0; i < a.length() / 2 + 1; i++)
        if (a.at(i) != a.at(a.length() - 1 - i)) return false;
    return true;
}

string invert(string tekst) 
{
    string wynik;
    for (int i = 0; i < tekst.length(); i++)
        wynik.insert(0, tekst.substr(i, 1));
    return wynik;

}
int main()
{
    string tmp;
   
    cout <<" podaj liczbe: ";
    int liczba;
    cin >> liczba;  // 1 liczba


    while (test_palindromu(to_string(liczba)) == 0)
    {
        tmp = invert(to_string(liczba));
        liczba += atoi(tmp.c_str());
    }
    cout << liczba;

}



      
    

    



