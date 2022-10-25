/*
               5
              / \
             2   1
              \   
              6
*/
#include<iostream>
using namespace std;
struct Node{
 
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }

};
void postOrder(struct Node *root){
    if(root == NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(struct Node *root){
    if(root == NULL)
    return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(struct Node *root){
    if(root == NULL)
    return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    struct Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(1);
    root->left->right = new Node(6);
    cout<<"Post order ";
    postOrder(root);
    cout<<"\n";
    cout<<"Pre order ";
    preOrder(root);
    cout<<"\n";
    cout<<"In order ";
    inOrder(root);
    return 0;

}