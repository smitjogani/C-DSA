#include<iostream>
using namespace std;

int main()
{
    //create 2d array
    int arr[3][4];

    // take input row wise
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 4; j++ )
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // take input column wise
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < ; j++ )
        {
            cin >> arr[j][i];
        }
    }

    // print 2d array
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;   
}