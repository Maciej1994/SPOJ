#include <iostream>
using namespace std;

bool czy_pierwsza(int x);


int main()
{
	cout << " podaj ilosc testow: ";
	int n, x;
	cin >> n;

	bool* tablica = new bool[n];



	for (int i{ 0 }; i < n; ++i)
	{
		cout << "Podaj liczbę: ";
		cin >> x;

		if (czy_pierwsza(x))
			cout << "TAK";
		else
			cout << "NIE";
		cout << endl;



	}

	delete[] tablica;



}

bool czy_pierwsza(int x)
{
	if (x < 2)
		return false;

	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return true;
}







