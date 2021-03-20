#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;

	cout << " podaj ilosc testow: ";
	int ile;
	cin >> ile;


	for (int j{ 0 }; j < ile; j++)
	{


		cout << " podaj 1 dzielnik: ";
		cin >> a;
		cout << " podaj 2 dzielnik: ";
		cin >> b;


		for (int i{ 1 }; ; ++i)
		{

			c = i % a;
			d = i % b;

			if (c == 0 && d == 0)
			{
				cout << i;
				cout << endl;
				break;
			}
		}


	}
	
}

