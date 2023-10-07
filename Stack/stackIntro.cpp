#include<iostream>
#include<stack>
using namespace std;

int main()
{   
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    
    cout << "Printing Top Element " << s.top() << endl;

    s.empty() ? cout<<"Stack is Empty " << endl : cout<<"Stack is Not Empty " << endl;

    return 0;
}