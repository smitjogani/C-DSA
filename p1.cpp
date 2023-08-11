//Subtract the product and sum of digits of an integer

#include<iostream>
using namespace std;

int main()
{
    int product = 1;
    int sum = 0;

    int n;
    cout << "enter the n : "<<endl;
    cin >> n;

    while(n!=0)
    {
        int digit = (n%10);
        product *= digit;
        sum += digit;

        n = (n/10);
    }
    int answer = product - sum;
    cout << answer;
}