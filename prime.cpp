#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is not a Prime number";
            return 0;
        }
    }
    cout << "It is a Prime number";
    return 1;
}

int main()
{
    int n;
    cin >> n;

    isPrime(n);
}