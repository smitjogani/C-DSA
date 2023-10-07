#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);

    cout << "Front of Queue " << q.front() << endl;
    cout << "End of Queue " << q.back() << endl;

    cout << "Size of queue is " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue is " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}