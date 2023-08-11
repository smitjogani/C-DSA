#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        // 1:triangle
        int space = 1;
        while (space <= i)
        {
            cout << space;
            space++;
        }

        // 2nd triangle
        int j = n - 1;
        while (j >= i)
        {
            cout << "*";
            j--;
        }

        int end = n;
        while (end >= i)
        {
            cout << end;
            end--;
        }
        cout << endl;
        i--;
    }
}