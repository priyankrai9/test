#include<iostream>
using namespace std;
struct Node{
    int root;
    struct Node *left;
    struct Node *right;

    Node(int i){
    int data = i;
    left = right = nullptr ;
}
};

void InOrder(struct Node root){
    if(Node *root->data == nullptr)
    return;
    InOrder(Node *root->left);
}

int main(){
    //struct Node*();
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left -> right =new Node(5);
    return 0;
}

