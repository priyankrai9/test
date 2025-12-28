// Create, insert and delete int element from Stack
#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
void traverse(struct stack *s)
{
    int i = 0;
    while (i <= s->top)
    {
        cout << s->arr[i] << "\t";
        i++;
    }
}
bool isFull(struct stack *s)
{
    if (s->top == s->size - 1)
        return true;
    return false;
}
bool isEmpty(struct stack *s)
{
    if (s->top == -1)
        return true;
    return false;
}
void Push(struct stack *s, int data)
{
    if (isFull)
    {
        cout << "stack is Full" << endl;
        // return 0;
    }
    cout << "inserted element is ";
    s->top++;
    s->arr[s->top] = data;
    // return 0;
}
void Pop(struct stack *s)
{
    if (isEmpty)
    {
        cout << "Stack is empty" << endl;
        // return 0;
    }
    cout << "delete element is " << s->arr[s->top] << endl;
    s->arr[s->top]=NULL;
    s->top--;
    // return 0;
}
int main()
{
    struct stack *s = new (struct stack);
    s->top = -1;
    s->size = 10;
    s->arr = new int(s->size);
    Push(s, 10);
    Push(s, 20);
    Push(s, 30);
    Push(s, 40);
    Pop(s);

    traverse(s);
    cout << "last deleted item"
         << "\t";
    cout << s->arr[3];
    return 0;
}