#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(42);
    v.push_back(2);
    v.push_back(13);
    v.push_back(57);

    // for(int i:v)
    // {
    //     cout << i << " ";
    // }

    cout << "Binary search : " << binary_search(v.begin(), v.end(), 2) << endl; 
}