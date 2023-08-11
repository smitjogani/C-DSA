#include <iostream>
using namespace std;

void merging(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int length1 = mid - s + 1;
    int length2 = e - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    // copy the value
    int k = s;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[k++];
    }

    // merge both sorted arrays
    int index1 = 0;
    int index2 = 0;

    k = s;

    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < length1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < length2)
    {
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void merge(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // sort the left part
    merge(arr, s, mid);

    // sort the right part
    merge(arr, mid + 1, e);

    // merge both parts
    merging(arr, s, e);
}

int main()
{
    int array[5] = {2, 5, 1, 6, 9};
    int n = 5;

    merge(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}