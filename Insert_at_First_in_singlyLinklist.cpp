#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *next;
};
void Addnode(node *&head,int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *temp2=new node;
        temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}
void Insert_at_First(node *&head,int data)
{
    if(head==NULL)
    {
        cout<<"List is Empty create a node First ";
    }
    node *temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
}
void print(node *head)
{
    node *ptr=new node;
    ptr=head;
    cout<<"List are : ";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
     struct node *head=NULL;
    while (true)
    {
        cout<<" 1 Input Element in List "<<endl;
        cout<<" 2 Insert At First"<<endl;
        cout<<" 3 Exit"<<endl;
        cout<<"Enter choise :";
        int ch;
        cin>>ch;
        switch (ch)
        {
             case 1: 
        {
             cout<<"Enter data : ";
            int x;
            cin>>x;
            Addnode(head,x);
            system("CLS");
            print(head);
            break;
        
        }
        case 2: 
        {
             cout<<"Enter data : ";
            int y;
            cin>>y;
            Insert_at_First(head,y);
            system("CLS");
            print(head);
            break;
        
        }
        case 3:
        {
            system("CLS");
            print(head);
            exit(1);
            break;
        }
           
        default:
            break;
        }
    } 



    return 0;
}