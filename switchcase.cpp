#include <iostream>
using namespace std;

int main()
{
    int n = 2;

    cout << endl;

    switch (n)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    default:
        cout << "It's a default case" << endl;
    }
}