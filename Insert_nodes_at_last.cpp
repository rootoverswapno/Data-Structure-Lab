#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *next;
};
void Insert_at_last(node *&head,int data)
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
        cout<<" 1 Insert At Last"<<endl;
        cout<<" 2 Exit"<<endl;
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
            Insert_at_last(head,x);
            system("CLS");
            print(head);
            break;
        
        }
        case 2:
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