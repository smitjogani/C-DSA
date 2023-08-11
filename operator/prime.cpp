#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Number is not Prime" << endl;
    }
    else
    {
        cout << "Number is Prime" << endl;
    }
}