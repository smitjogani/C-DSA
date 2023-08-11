#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // s.erase(s.begin());

    // cout << "After Erase : "
    //      << " ";
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);

    // for (int i : s)
    // {
    //     cout << i << endl;
    // }

    // cout << " Number is present or not :"
    //      << " ";
    // cout << s.count(4) << " ";
    // cout << s.count(6) << endl;

    // return itreator of no
    // set<int>::iterator str = s.find(5);

    // cout << "Value is present at : " << *str << endl;

    set<int>::iterator itr = s.find(5);

    for (auto itf = itr; itf != s.end(); itf++)
    {
        cout << *itf << " ";
    }
    cout << endl;
}