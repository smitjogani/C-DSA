#include<iostream>
using namespace std;

int main()
{
    // copying a pointer
    int num = 5;
    int *p = &num;

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    return 0;
}
