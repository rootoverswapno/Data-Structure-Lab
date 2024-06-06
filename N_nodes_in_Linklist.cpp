#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 struct node *next;
};
void add_node(node *&head,int data)
{
   node *node1=new node;
   node1->data=data;
   node1->next=NULL;
   if(head==NULL)
   {
    head=node1;
   }
   else{
          node *node2=new node;
          node2=head;
          while(node2->next!=NULL)
          {
              node2=node2->next;
          }
          node2->next=node1;
   }
}
void printnode(node *&head)
{
    node *print=head;
    cout<<"List are : ";
    while(print!=NULL)
    {
        
       cout<<print->data<<" ";
       print=print->next;
    }
}

int main()
{
    struct node *head;
    head=NULL;
    while(true)
    {
        cout<<"Enter data : ";
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        else
        {
            add_node(head,x);
        }
    }

    printnode(head);



    return 0;
}