#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> a;
    a.push("Smit");
    a.push("Jogani");
    a.push("ahmedabad");

    cout << "First :" << a.front() << endl;
    a.pop();

    cout << "First after pop:" << a.front() << endl;

    cout << "Size : " << a.size();
}