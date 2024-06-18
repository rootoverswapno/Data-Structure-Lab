#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
struct node*createnode(int data)
{
  struct node*n;
  n=new node; //Allocating memory on the heap
  n->data=data;//setting the data
  n->left=NULL;//setting the left and right children to null
  n->right=NULL;
  return n;
  //Finally return the node
}
int main()
{
    //constructing the root node
 struct node *p=createnode(2);
 struct node *p1=createnode(2);
 struct node *p2=createnode(2);
       p->left=p1;
       p->right=p2;

    return 0;
}