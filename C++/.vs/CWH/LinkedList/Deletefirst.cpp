#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node *ptr){
    while(ptr->next!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct Node* insert_at_first(struct Node *p,int data){
    struct Node *pt=new (struct Node);
    pt->data = data;
    pt->next=p;
    // p->next = pt; 
    p=pt;
    return pt;
}
struct Node* deleteFirst(struct Node * ptr){
    struct Node *p;
    p=ptr->next;
    delete ptr;
    return p;
}

int main(){
    struct Node *head=new (struct Node);
    struct Node *second=new (struct Node);
    struct Node *third=new (struct Node);
    struct Node *fourth=new (struct Node);
    head->data=10;
    head->next=second;
    second->data = 20;
    second->next = third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
    display(head);
    cout<<"after inserting" <<endl;
    head=insert_at_first(head,6);
    display(head);
    cout<<"delete at first: "<<endl;
    head=deleteFirst(head);
    display(head);
    return 0;
}