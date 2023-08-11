#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = (row - 1);
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = n;

        while (col >= row)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
}