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
    node *rev1=ReverseKnode(head,2);
     printlist(rev1);

    return 0;
}