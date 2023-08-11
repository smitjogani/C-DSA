#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // key < arr[mid]
        {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int n;
    cout << "Enter number for search :";
    cin >> n;

    int evenIndex = binarySearch(even, 6, n);
    cout << "index of " << n << " in even array is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, n);
    cout << "index of " << n << " in odd array is " << oddIndex << endl;

    return 0;
}