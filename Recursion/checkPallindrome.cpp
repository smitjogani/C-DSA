#include <iostream>
using namespace std;

bool palindrome(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return palindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "aassdssaa";
    bool isPalindrome = palindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}