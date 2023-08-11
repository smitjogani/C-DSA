#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i < n - 2; i++)
    {
        int nextNo = a + b;
        cout << nextNo << " ";
        a = b;
        b = nextNo;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);
}