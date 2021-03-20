#include <iostream>
#include<array>
using namespace std;

int main()
{
    
    array<int, 5>arr1;
   

    cout << " podaj kilka liczb ( max 5 ):\n";

    for (int i{ 0 }; i < arr1.size(); ++i)
    {
        cout << " liczba: " << i + 1 << " : ";
        cin >> arr1[i];
    }

    for (int j{ 4 }; j >= 0; j--)
    {
        cout << arr1[j];
    }
}


