#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Jogani");
    s.push("smit");
    s.push("d"); 

    cout << s.top()<<endl;

    s.pop();
    cout << s.top();

    cout << "Size : " << s.size() << endl;

    cout << s.empty();
}