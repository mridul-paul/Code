#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int idata)
{
    struct node* node= new struct node;
    node-> data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
};
int main()
{
    struct node* root=newnode(10);
    root->left=newnode(5);
    root->right=newnode(3);
    root->left->left=newnode(7);
    root->left->right=newnode(12);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->left->data<<endl;
    cout<<root->left->right->data<<endl;
    return 0;
}
