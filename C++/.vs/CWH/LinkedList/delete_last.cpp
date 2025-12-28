#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node *ptr){
    while(ptr!=NULL){
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
// struct Node* deleteFirst(struct Node * ptr){
    // struct Node *p;
    // p=ptr->next;
    // delete ptr;
    // return p;
// }
struct Node* deleteInBetween(struct Node *h){
    struct Node *p=h;
    while(p->next->next!=NULL){
        p=p->next;
    }
    struct Node*temp;
    temp = p->next;
    p->next=NULL;
    cout<<"deleted item is "<<temp->data<<endl;
    delete temp;
    return h;
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
    // cout<<"delete in between: "<<endl;
    head=deleteInBetween(head);
    display(head);
    return 0;
}