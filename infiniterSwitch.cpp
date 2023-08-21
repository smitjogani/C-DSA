#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n = 1;

    switch (n)
    {
    case 1:
        cout << "Done";
        exit(0);

    default:
        cout << "it's a default case";
    }
}