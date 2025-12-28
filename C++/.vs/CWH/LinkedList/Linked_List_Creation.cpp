#include<iostream>
// #include<bits/s?>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void Traverse(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main(){
    struct Node *head,*second,*third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    second->data=2;
    third->data=3;
    head->next=second;
    second->next=third;
    third->next=NULL;
   // cout<<head->data<<second->data<<third->data;
    Traverse(head);
    return 0;
}