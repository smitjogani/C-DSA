#include <iostream>
using namespace std;

class Stack
{
    // Properties
public:
    int *arr;
    int top;
    int size;

    // Behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(5);

    s.push(22);
    s.push(43);
    s.push(44);

    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;

    int ans = s.isEmpty();
    ans ? cout << "Stack is Empty " << endl : cout << "Stack is Not Empty " << endl;

    return 0;
}