#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int sum=0;
    cout << "Printing count from 1 to n" << endl;
    for (int i = 1; i <= n; i++)
    {
         sum += i;
    }
    cout << sum;
}