#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
struct node* newnode(int idata)
{
    struct node* node=new struct node;
    node->data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
};
void swapdata( struct node* a, struct node* b)
{
    int temp;
    temp=a->data;
    a->data=b->data;
    b->data=temp;
}
void heapify(struct node* root)
{
    if(root==NULL)
        return;
        struct node* largest=root;
    if(root->left && root->left->data >largest->data)
        largest=root->left;
    if(root->right && root-> right-> data > largest-> data)
        largest=root->right;
    if(largest!=root)
    {
        swapdata(root,largest);
        heapify(largest);
    }
}
struct node* buildheap()
{
    struct node* root= newnode( 10);
    root->left =newnode(1);
    root-> right=newnode(12);
    root-> left->left=newnode(18);
    root-> left -> right=newnode(9);
    heapify(root->left);
    heapify(root->right);
    heapify(root) ;
    return root;
};
void printtree(struct node* root, int space =0, int height=10)
{
    if(root=NULL)
        return;
    space +=height;
    printtree(root->right, space);
    cout<<endl;
    for(int i=height;i<space ;i++)
        cout<<" ";
    cout<<root->data<<"\n";
    printtree(root->left, space );
}
int main()
{
    struct node* root=buildheap();

    cout << "Max Heap (Pointer-based, like your code):\n";
    printtree(root);
    return 0;
}
