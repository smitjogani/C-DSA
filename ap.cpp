#include<iostream>
using namespace std;

int noOfTerm(int n)
{
    int term = (3 * n + 7);
    return term;
}

int main()
{
    int n;
    cin >> n;
    cout << noOfTerm(n) << endl;
}