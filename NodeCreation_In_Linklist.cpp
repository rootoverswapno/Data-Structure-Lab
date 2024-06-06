#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *next;
};
int main()
{
    struct node *head;
    head=new node;
    head->data=12;
    head->next=NULL;

    //create node 2
    struct node *node1=new node;
    node1->data=13;
    node1->next=NULL;
    head->next=node1;

    //create node 3
    struct node *node2=new node;
    node2->data=14;
    node2->next=NULL;
    node1->next=node2;

    //print the linklist
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

    return 0;
}