#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node *front=NULL;
struct node *rear=NULL;
void eneque(int value)
{
    struct node *n=new node;
    if(n==NULL)
    {
        cout<<"Queue is Full";
    }
    else
    {
        n->data=value;
        n->next=NULL;
        if(front==NULL)
        {
           front=rear=n; 
        }
        else
        {
            rear->next=n;
            rear=n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct node *ptr=front;

    if(front==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        front=front->next;
        val=ptr->data;
        delete ptr;
    }
    return val;
}
void displaylist(struct node *ptr)
{
    cout<<"Printing the list : ";
    while(ptr!=NULL)

    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
     cout << endl;
}
int main()
{
     while (true) {
        cout << "1. ENQUEUE DATA IN QUEUE " << endl;
        cout << "2. DEQUEUE DATA IN QUEUE " << endl;
        cout << "3. EXIT" << endl;
        cout << "Enter choice: ";
        int ch;
        cin >> ch;
        switch (ch) {
            case 1: {
                cout << "Enter Data: ";
                int x;
                cin >> x;
                system("CLS");
                eneque(x);
                displaylist(front);
                break;
            }
            case 2: {
                int xx;
                xx =dequeue();
                //  system("CLS");
                displaylist(front);
                break;
            }
            case 3: {
                 while (front != nullptr) { // Free all allocated memory
                    dequeue();
                } // Free allocated memory
                exit(0);
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }
    



    return 0;
}