#include <iostream>
using namespace std;

struct Node // created structure
{
    int data;
    Node *next; // self referential structure
    Node(int x) // constructor
    {
        data = x;
        next = NULL;
    }
};
struct Mystack
{
    int size;
    Node *head;
    Mystack()
    {
        head = NULL;
        size = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    int pop()
    {
        if (head == NULL)
        {
            cout << "stack is underflow";
            return 0;
        }
        Node *temp = head;
        int res = temp->data;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "underflow";
            return 0;
        }
        return head->data;
    }
};

int main()
{
    Node *s = new Node(50);
    Node *temp = new Node(40);
    Node *temp2 = new Node(20);
    s->next = temp;
    temp->next = temp2;
    temp2->next = NULL;
    return 0;
}
