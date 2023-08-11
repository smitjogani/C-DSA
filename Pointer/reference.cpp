#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    // int i = 5;
    // int &j = i; // create a refrence variable

    // cout << "Value of i : " << i << endl;
    // i++;
    // cout << "Value of i : " << i << endl;
    // j++;
    // cout << "Value of i : " << i << endl;
    // cout << "Value of j : " << j << endl;

    int n = 5;

    cout << "Before : " << n << endl;
    // update(n);
    update2(n);

    cout << "After : " << n << endl;
    return 0;
}