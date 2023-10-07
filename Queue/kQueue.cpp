#include <iostream>
using namespace std;

class kQueue
{
public:
    int n, k, *front, *rear, *arr, freeSpot, *next;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freeSpot = 0;
    }

    void enqueue(int data, int qn)
    {
        // check overflow
        if (freeSpot == -1)
        {
            cout << "No  Empty Apce in present " << endl;
            return;
        }

        // find out first free index
        int index = freeSpot;

        // update the free spot
        freeSpot = next[index];

        // check whether first element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to the prev element
            next[rear[qn - 1]] = index;
        }

        // Update the next
        next[index] = -1;

        // update the rear
        rear[qn - 1] = index;

        // Push the element
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // check underFlow
        if (front[qn - 1] == -1)
        {
            cout << "Underflow Occured " << endl;
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // Manage freeSlots
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main()
{
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    return 0;
}