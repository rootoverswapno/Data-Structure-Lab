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
    printlist(head);
    node * rev=Reverse(head);
    printlist(rev);

    return 0;
}