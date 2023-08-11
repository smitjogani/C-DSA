#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // SPACE
        int space = (n - i);
        while (space)
        {
            cout << " ";
            space--;
        }

        // 1 : Triangle

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        //2:triangle
        int start = (i-1);
        while (start)
        {
            cout<<start;
            start--;
        }
        

        cout << endl;
        i++;
    }
}