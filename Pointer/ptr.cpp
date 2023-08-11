#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << num << endl;

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;
    cout << "Value is :" << *ptr << endl;
    cout << "Value in ptr variable is :" << ptr << endl;

    // double d = 3.4;
    // double *p2 = &d;

    cout << "size of integer is : " << sizeof(num) << endl;
    cout << "size of pointer is : " << sizeof(ptr) << endl;

    return 0;
}