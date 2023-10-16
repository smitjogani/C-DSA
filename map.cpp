#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "smit";
    m[13] = "kumar";
    m[2] = "Jogani";
    m.insert({5, "bheem"});

    cout << "Before Erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13 -> " << m.count(13) << endl;

    cout << "After Erase : " << endl;
    m.erase(13);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}