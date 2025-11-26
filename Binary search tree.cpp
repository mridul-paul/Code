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
    struct node* node=new struct node;
    node-> data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
};
struct node* insert(struct node* root , int data)
{
    if(root==NULL)
    {
        return newnode(data);
    }
    if(data<root->data)
        root->left=insert(root->left,data);
    else if(data>root->data)
        root->right=insert(root->right,data);
    return root;
};
int main()
{
    struct node* root=NULL;

    root=insert(root, 10);
    root=insert(root, 15);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,12);
   cout<<"The root: "<<root->data<<endl;
   cout<<"The right child value: "<<root->right->left->data<<endl;
return  0;
}
