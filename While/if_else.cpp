#include <iostream>
using namespace std;

int main()
{
    // int a = 2;
    // int b = a + 1;
    // if ((a = 3) == b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << a + 1;
    // }

    char ch;
    cout << "Enter the input : " << endl;
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z')
    {
        cout << "The input is Capital";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << "The input ris small";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << "The input is nuber";
    }
    else{
        cout << "Enter Valid Input";
    }
}