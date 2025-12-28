#include<iostream>
using namespace std;
struct stack {
    int size;
    int top;
    int *arr;
};
bool isEmpty(struct stack *t){
    if(t->top==-1) return true;
    return false;
}
bool isFull(struct stack *t){
    if(t->top==t->size-1) return true;
    return false;
}
void Push(struct stack *t,int data){
    if(isFull(t)) cout<<"stack is full"<<endl;
    else{
        t->top++;
        t->arr[t->top]=data;
        cout<<t->arr[t->top]<<endl;
   }
}
void Pop(struct stack *t){
    if(isEmpty(t)) cout<<"stack is empty"<<endl;
    else{
        cout<<(t->arr[t->top])<<endl;
        t->top--;
    }
}

int main(){
    struct stack *s=new struct stack;
    s->size=2;
    s->top=-1;
    s->arr=new int(s->size);
    Push(s,10);
    Push(s,20);
    Push(s,30);
    Pop(s);
    return 0;
}