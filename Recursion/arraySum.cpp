#include<iostream>
usign namespace std;

int getsum(int *arr, int size)
{
    //base case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + getsum(arr+1, size-1);
    return sum;
}

int main()
{

    int arr[5] = {1,2,4,5,6};
    int size = sizeof(arr);

    int sum = getSum(arr, size);
    cout << sum << endl;

    return 0;
}