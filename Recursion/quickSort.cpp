<<<<<<< HEAD
#include <iostream>
using namespace std;

int partision(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // Partision
    int p = partision(arr, s, e);

    // sort the left part
    quickSort(arr, s, p - 1);

    // sort the right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};
    int n = 8;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
=======
#include <iostream>
using namespace std;

int partision(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // Partision
    int p = partision(arr, s, e);

    // sort the left part
    quickSort(arr, s, p - 1);

    // sort the right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};
    int n = 8;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
>>>>>>> f434cc3a049ae377052904ccc0c696f27e230a69
}