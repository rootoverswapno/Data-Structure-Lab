#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int arr[MAX];
int top=-1;
//push element in stack
void push(int data)
{
    if(top>=(MAX-1))
    {
        cout<<"Stack overflow";
        return;
    }
    else
    {
        arr[++top]=data;
    }
}
//pop element in stack
int pop()
{
    if(top<0)
    {
        cout<<"Stack Underflow "<<endl;
        return -1;
    }
    else
    {
        int poped=arr[top--];
        return poped;
    }
}
//display stack;
void display()
{
  if(top<0)
  {
    cout<<"Stack is empty "<<endl;
    return;
  }  
  else
  {
     cout<<"Stack is :";
    for(int i=top;i>=0;--i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
//Find peek element
int peek()
{
  if(top<0)
    {
        cout<<"Stack Underflow "<<endl;
        return -1;
    }
    else
    {
        int p=arr[top];
        return p;
    }  
}
int main()
{
    while(true)
    {
        cout<<"1. PUSH ELEMENT IN STACK :"<<endl;
        cout<<"2. POP ELEMENT IN STACK  :"<<endl;
        cout<<"3. PEEK ELEMENT IN STACK :"<<endl;
        cout<<"4. EXIT : "<<endl;
        cout<<"ENTER CHOOSE A OPTION : ";
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter push element data : ";
            int x;
            cin>>x;
            push(x);
            system("CLS");
            display();
            break;
        case 2:
          int pp;
          pp=pop();
          system("CLS");
          cout<<"Pop Element is "<<pp<<endl;
          display();
          break;
        case 3:
           int pek;
           pek=peek();
           system("CLS");
           cout<<"Peek Element is "<<pek<<endl;
           display();
           break;
        case 4:
        exit(1);
           default:
           break;
        }

    }



    return 0;
}