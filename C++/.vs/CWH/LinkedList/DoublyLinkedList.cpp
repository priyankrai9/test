#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    struct Node * prev;
};
void display(struct Node*ptr){
    while(ptr!=NULL){
        // cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"in reverse direction";
    while(ptr->prev!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->prev;
    }
}

int main(){
    struct Node *head=new struct Node;
    struct Node *second=new struct Node;
    struct Node *third=new struct Node;
    struct Node *fourth=new struct Node;
    struct Node *fifth=new struct Node;
    head->data=10;
    head->prev=NULL;
    head->next=second;
    second->data=20;
    second->prev=head;
    second->next=third;
    third->data=30;
    third->next=fourth;
    third->prev=second;
    fourth->data=40;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->data=50;
    fifth->prev=fourth;
    fifth->next=NULL;
    display(head);
    return 0;
}