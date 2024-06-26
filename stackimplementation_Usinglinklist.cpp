#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
};
//push element
void push( node*&top,int data)
{
     node *newNode=new node;
    newNode->data=data;
    newNode->next=top;
    top=newNode;
}
int pop(node *&top)
{
    if(top==NULL)
    {
        cout<<"Stack is Underflow";
    }
    else
    {
        node *temp=top;
        top=top->next;
        int poped=temp->data;
        delete temp;
        return poped;
    }
}
void display(node *&top)
{
    if(top==NULL)
    {
        cout<<"Stack is empty ";
    }
    else
    {

        cout<<"Stack is :";
        node *ptr=top;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}
int peek(node *&top)
{
      if (top == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        return top->data;
    }
}
int main()
{
    node *top=NULL;
    while (true) {
        cout << "1. PUSH ELEMENT IN STACK :" << endl;
        cout << "2. POP ELEMENT IN STACK  :" << endl;
        cout << "3. PEEK ELEMENT IN STACK :" << endl;
        cout << "4. EXIT" << endl;
        cout << "ENTER CHOOSE AN OPTION : ";
        int ch;
        cin >> ch;
        
        switch (ch) {
            case 1:
                cout << "Enter push element data: ";
                int x;
                cin >> x;
                push(top, x);
                system("CLS");
                display(top);
                break;
            case 2:
                int pp;
                pp = pop(top);
                system("CLS");
                if (pp != -1) {
                    cout << "Popped element is " << pp << endl;
                }
                display(top);
                break;
            case 3:
                int pek;
                pek = peek(top);
                system("CLS");
                if (pek != -1) {
                    cout << "Peek element is " << pek << endl;
                }
                display(top);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }



    return 0;
}