#include<iostream>
#include<queue>
using namespace std;
class Node{  // Class for a Node
    public:
    Node *left;
    Node *right;
    int data;
    Node(int value) // constructor 
    {
        data = value;
    }
};

Node *createNode()
{
    int x;
    cout<<"Enter Data : ";
    cin>>x;
    if(x == -1)
    {
        return NULL;
    }
    Node *newnode = new Node(x);
    cout<<"Left Node of "<<x<<"\n";
    newnode->left = createNode();
    cout<<"Right Node of "<<x<<"\n";
    newnode->right = createNode();
    return newnode;
}
void preorder(Node *root)
{
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);


}
int main()
{
    Node *root = createNode();
    cout<<"Preorder : ";
    preorder(root);
    return 0;

}

