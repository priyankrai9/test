#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;;
        ptr=ptr->next;
    }
}
struct Node *insert_at_begin(struct Node *head,int data){
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node *insert_before(struct Node*ptr, struct Node *head){
    struct Node *p=head;

}
int main(){
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    head->next=NULL;
    cout<<"before inserting an element"<<"\t";
    traverse(head);
    head = insert_at_begin(head,6);
    cout<<"after inserting element at begin"<<"\t";
    traverse(head);
    return 0;
}
