#include <iostream>
using namespace std;

class human
{
public:
    int height;
    int age;
    int weight;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class male : public human
{
public:
    string color;

    void sleep()
    {
        cout << " Male Sleeping " << endl;
    }
};

int main()
{
    male obj1;
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep();
    obj1.setWeight(56);
    cout << obj1.weight << endl;
    return 0;
}