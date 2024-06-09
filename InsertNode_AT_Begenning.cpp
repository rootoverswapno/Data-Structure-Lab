#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *next;
};
void createlist(node *&head,int data)
{
    node *newNode=new node;
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        node *temp=new node;
        temp=head;
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newNode;
    }

}
void InserATBegenning(node *&head,int data)
{
    
    node *temp1=new node;
    temp1->data=data;
    temp1->next=head;
    head=temp1;

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
  struct node *head=new node;
  head=NULL;
  while(true)
  {
    cout<<"1 CREATE LIST "<<endl;
    cout<<"2 INSERT AT BEGENNING "<<endl;
    cout<<"3 EXIT "<<endl;
   
    cout<<"Enter Choise :";
     int ch;
    cin>>ch;
    
    switch (ch)
    {
    case 1:
    cout<<"Enter Data : ";
    int x;
    cin>>x;
       createlist(head,x);
       InserATBegenning(head,x);
       system("CLS");
       print(head);
        break;
    
    case 2:
    cout<<"Enter Data : ";
    int xx;
    cin>>xx;
       
       InserATBegenning(head,xx);
       system("CLS");
       print(head);
        break;
    
    case 3:
       exit(1);
        break;
    
    default:
        break;
    }
  }  



    return 0;
}