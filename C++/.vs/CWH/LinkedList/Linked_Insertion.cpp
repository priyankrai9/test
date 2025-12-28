#include<iostream>
using namespace std;
//creation of Linked List;
struct Node{
    int data;
    struct Node *next;
};
struct Node *insert_at_begin(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node ));
    ptr->next =head;
    ptr->data=data;  
    return ptr;
}
void traverse(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;;
        ptr=ptr->next;
    }
}
int main(){
    struct Node *head;
    head->data = 0;
    head->next=NULL;
    cout<<"elements before inserting a node" <<"\t";
    traverse(head);

    head = insert_at_begin(head,7);
    cout<<"after inserting node"<<"\t";
    traverse(head);
    return 0;
}
