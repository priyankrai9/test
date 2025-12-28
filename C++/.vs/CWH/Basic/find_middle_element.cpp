#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int middle(struct Node *p, int length)
{
    int i, j;
    int count = 0;
    struct Node *ptr;
    ptr = p;
    if (length % 2 == 0)
    {
        while (count != (length / 2) + 1)
        {
            ptr = ptr->next;
            count++;
        }
        return ptr->next->data;
    }
    else
    {
        while (count != (length) / 2)
        {
            ptr = ptr->next;
            count++;
        }
        return ptr->next->data;
    }
}
int main()
{
    struct Node *head = new (struct Node);
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    int mid = middle(head, 4);
    cout << mid << endl;
}