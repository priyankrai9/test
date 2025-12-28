#include <iostream>
using namespace std;
struct stack
{
    int size, top;
    int *arr;
};
bool isEmpty(struct stack *s, int top)
{
    if (top == -1)
        return true;
    return false;
}
bool isFull(struct stack *s, int top)
{
    if (top == s->size)
        return true;
    return false;
}
struct stack *Push(struct stack *st, int top)
{
    if (isFull)
    {
        cout << "stack is overflow";
        return 0;
    }
}
struct stack *Pop(struct stack *st)
{
}
int main()
{
    struct stack *s = new struct stack;
    s->size = 10;
    s->top = -1;
    s->arr = new int(s->size);
    Push(s, 5);
    Pop(s);
}