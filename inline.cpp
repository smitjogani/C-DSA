#include <iostream>
using namespace std;

inline int getMax(int a, int b)
{
    r
    eturn (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    // if (a > b)
    // {
    //     ans = a;
    // }
    // else
    // {
    //     ans = b;
    // }
    // using ternary operator

    ans = (a > b) ? a : b;

    cout << "ans 1 : " << ans << endl;

    a += 3;
    b += 1;

    ans = getMax(a, b);
    cout << "ans 2 : " << ans << endl;

    return 0;
}