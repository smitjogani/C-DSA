#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int mini = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
        // if (n[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i <= size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum : "<< getMax(num, size)<<endl;
    cout << "Minimum : "<< getMin(num, size)<<endl;
}