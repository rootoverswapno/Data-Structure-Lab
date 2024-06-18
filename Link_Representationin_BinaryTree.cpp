#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
int main()
{
    //constructing the root node

    struct node *p;
    p=new node;
    p->left=NULL;
    p->right=NULL;

    //constructing the first node
     struct node *p1;
    p1=new node;
    p1->left=NULL;
    p1->right=NULL;
     
    //Constructing the second node
    struct node *p2;
    p2=new node;
    p2->left=NULL;
    p2->right=NULL;

    //Linking the root node right and left children
    p->left=p1;
    p->right=p2;

    return 0;
}