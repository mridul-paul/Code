
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
    node->data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
};



void preorder(struct node* root)
{
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root)
{

 if (root == NULL) return;

    inorder(root->left);
     cout << root->data << " ";
    inorder(root->right);
}
void postorder(struct node* root)
{
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    struct node* root=newnode (10);
    root->left=newnode(5);
    root->right=newnode(3);
    root->left->left=newnode(12);
    root->left->right=newnode(18);
    cout<<root->data<<endl;
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal: ";
    postorder(root);
    cout<<endl;
return 0;
}

