#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertatlast(struct node *&head, int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
node *Reverse(node *&head)
{
    node *preptr=NULL;
    node *currptr=head;
    node *nextptr;
    while(currptr!=NULL)
    {
       nextptr=currptr->next;
       currptr->next=preptr;
       preptr=currptr;
       currptr=nextptr;
    }
    return preptr;
}
node *ReverseReecursion(node *&head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node *newNode=ReverseReecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}
node *ReverseKnode(node *&head,int k)
{
    node *preptr=NULL;
    node *currptr=head;
    node *nextptr;
    int ct=0;
    while(currptr!=NULL&&ct<k)
    {
       nextptr=currptr->next;
       currptr->next=preptr;
       preptr=currptr;
       currptr=nextptr;
       ct++;
    }
    if(nextptr!=NULL)
    {
        head->next=ReverseKnode(nextptr,k);
    }
    return preptr;
}
node *ReverseKnode1(node *&head,int k)
{
    node *preptr=NULL;
    node *currptr=head;
    node *nextptr;
    int ct=0;
    while(currptr!=NULL&&ct<k)
    {
       nextptr=currptr->next;
       currptr->next=preptr;
       preptr=currptr;
       currptr=nextptr;
       ct++;
    }
    if(nextptr!=NULL)
    {
        head->next=nextptr;
    }
    return preptr;
}
node *makeCycle(node *&head,int position)
{
    node *temp=head;
    node *startnode;
    int ct=1;
    while(temp->next!=NULL)
    {
        if(ct==position)
        {
            startnode=temp;
        }
        temp=temp->next;
        ct++;
    }
    temp->next=startnode;

}
bool Detectcycle(node *&head)
{
    node *slow=head;
    node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }

    }
    return false;

}
void RemoveCycle(node *head)
{
    node *fast=head;
    node *slow=head;
    do
    {
        fast=fast->next->next;
        slow=slow->next;
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next)
    {
         fast=fast->next;
         slow=slow->next;
    }
    slow->next=NULL;
    
}
void printlist(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertatlast(head, 1);
    insertatlast(head, 2);
    insertatlast(head, 3);
    insertatlast(head, 4);
    insertatlast(head, 5);
    insertatlast(head, 6);
    printlist(head);
    // node * rev=Reverse(head);
    // node *rev=ReverseReecursion(head);
    // printlist(rev);
    // node *rev1=ReverseKnode(head,2);
    //  printlist(rev1);
    //    node *rev2=ReverseKnode1(head,3);
    //    printlist(rev2);
    makeCycle(head,3);
    cout<<Detectcycle(head)<<endl;
    RemoveCycle(head);
    cout<<Detectcycle(head)<<endl;
    

    return 0;
}