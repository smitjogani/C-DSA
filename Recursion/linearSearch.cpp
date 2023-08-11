#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainning = search(arr + 1, size - 1, key);
        return remainning;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr);

    int key;
    cin >> key;

    int ans = search(arr, size, key);

    if (ans)
    {
        cout << "Match found" << endl;
    }
    else
    {
        cout << "Match Not found" << endl;
    }

    return 0;
}