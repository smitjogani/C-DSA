#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    // taking input row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Print 2d array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the Element to search"
         << " ";
    cin >> target;

    if (isPresent(arr, target))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Is Not Found" << endl;
    }

    return 0;
}