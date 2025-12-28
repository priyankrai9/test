#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    // struct Node *prev;
};
struct Node *reverse(struct Node *ptr)
{
    // int length;
    struct Node *prev = ptr;
    struct Node *curr=ptr;
    struct Node *first = ptr;
    while (ptr != NULL)
    {

        // curr = ptr;
        ptr = ptr->next;
        //curr->next = prev;
        if (prev == first)
            prev->next = NULL;
        curr->next=prev;
        prev = curr;
        curr = ptr;
    }
    // curr = ptr;
    // first->next = NULL;
    return prev;
}
void traverse(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
int main()
{
    struct Node *head = new (struct Node);
    struct Node *second = new (struct Node);
    struct Node *third = new (struct Node);
    struct Node *fourth = new (struct Node);
    struct Node *fifth = new (struct Node);
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = NULL;
    cout << "before reverse" << endl;
    traverse(head);
    head = reverse(head);
    cout << "after reversed"<<endl;
    traverse(head);
    return 0;
}