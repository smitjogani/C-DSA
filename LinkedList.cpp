#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destrocter
    ~Node()
    {
        int value = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new Node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    // Deleting head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free
        temp -> next = NULL;
        // curr = curr -> next;
        delete temp;
    }
    // Deleting middle or tail node
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            curr++;
        }

        prev->next = curr->next;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    cout << "Before  :" << endl;
    print(head);

    // insertAtHead(tail, 12);
    insertAtTail(tail, 13);
    insertAtTail(tail, 156);

    cout << "After  :" << endl;
    print(head);

    insertAtPosition(head, tail, 4, 23);
    print(head);

    // cout << "Head " << head -> data << endl;
    // cout << "Tail " << tail -> data << endl;

    deleteNode(3, head);
    print(head);

    return 0;
}