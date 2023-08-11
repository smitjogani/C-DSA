#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number : " << endl;
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while (i <= n)
//     {
//         // cout << i << " ";
//         sum = sum + i;
//         i++;
//     }

//     cout << "Value Of Sum is " << sum << endl;
// }


//Sum of even numbers
int main()
{
    int n;
    cout << "Enter the Last Number " << endl;
    cin >> n;

    int i = 2;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Value Of Sum is " << sum << endl;
}