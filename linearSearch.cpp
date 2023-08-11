#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value which is require to search:";
    cin >> n;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 2, 9, 10};
    int match = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            cout << "Match Found";
            match++;
        }
    }
    cout << "Match not Found" << endl;
    cout << n << " is "<< match <<" times execute" <<endl;
    return 0;
}