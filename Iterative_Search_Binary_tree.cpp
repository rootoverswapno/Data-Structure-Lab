#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";     
        inorder(root->right);
 /*
           5
          / \
         3   6
        / \
       1   4
 */
    }
}
//Recursive Search
struct node *search(node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key==root->data)
    {
        return root;
    }
    else if(key<root->data)
    {
        search(root->left,key);
    }
    else
    {
       search(root->right,key);
    }
}
//Iterative Search
struct node*ItrSearch(struct node*root,int key)
{
    int ct=0;
    while(root!=NULL)
    {
        if(key==root->data)
        {
            return root;   
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return NULL;
}
int main()
{
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // preorder(p);
    // cout<<endl;
    // postorder(p);
    // cout<<endl;
    // inorder(p);
    // struct node* n=search(p,3);
    // if(n!=NULL)
    // {
    //     cout<<"Found : "<<n->data<<endl;
    // }
    // else{
    //     cout<<"Element Not Found "<<endl;
    // }
    // cout<<n->data<<endl;


    struct node* n=ItrSearch(p,3);
    if(n!=NULL)
    {
        cout<<"Found : "<<n->data<<endl;
    }
    else{
        cout<<"Element Not Found "<<endl;
    }
    // cout<<n->data<<endl;

    return 0;
}