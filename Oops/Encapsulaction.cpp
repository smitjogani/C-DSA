#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student s;

    cout << s.getAge() << endl;

    return 0;
}