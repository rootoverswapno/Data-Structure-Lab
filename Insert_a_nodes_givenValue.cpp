#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void Addnode(node *&head, int data)
{
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *temp2 = new node;
        temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
void Insert_at_First(node *&head, int data)
{
    if (head == NULL)
    {
        cout << "List is Empty create a node First ";
    }
    node *temp = new node;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void Insert_at_givenPosition(node *&head, int data, int pos)
{
    node *new_Node = new node;
    new_Node->data = data;
    new_Node->next = NULL;
    if (pos == 1)
    {
        new_Node->next = head;
        head = new_Node;
        return;
    }
    node *current = head;
    int current_position = 1;
    while (current != NULL && current_position < pos - 1)
    {
        current = current->next;
        current_position++;
    }
    if (current == NULL)
    {
        cout << "Position out of Bounds";
        delete new_Node;
        return;
    }
    new_Node->next = current->next;
    current->next = new_Node;
}
void Insert_after_givenData(node *&head,int value_tofind, int data )
{
     node *newNode1=new node;
     newNode1->data=data;
     newNode1->next=NULL;
     
     node *current=head;
     while(current!=NULL&&current->data!=value_tofind)
     {
         current=current->next;
     }
     if(current==NULL)
     {
        cout<<"This value Does not Found"<<endl;
        delete newNode1;
        return;
     }
     newNode1->next=current->next;
     current->next=newNode1;
}

void print(node *head)
{
    node *ptr = new node;
    ptr = head;
    cout << "List are : ";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node;
    head = NULL;
    while (true)
    {
        cout << " 1 Input Element in List " << endl;
        cout << " 2 Insert At First" << endl;
        cout << " 3 Insert At Given Position " << endl;
        cout << " 4 Insert At Given daTa Position " << endl;
        cout << " 5 Exit" << endl;
        cout << "Enter choise :";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter data : ";
            int x;
            cin >> x;
            Addnode(head, x);
            system("CLS");
            print(head);
            break;
        }
        case 2:
        {
            cout << "Enter data : ";
            int y;
            cin >> y;
            Insert_at_First(head, y);
            system("CLS");
            print(head);
            break;
        }
        case 3:
        {
            cout << "Enter Position :";
            int zz;
            cin >> zz;
            cout << "Enter data : ";
            int z;
            cin >> z;
            Insert_at_givenPosition(head, z, zz);
            system("CLS");
            print(head);
            break;
        }
          case 4:
        {
            
            cout << "Enter Data to find: ";
            int m;
            cin >> m;
            cout << "Enter  input nodes Data";
            int n;
            cin >> n;
            Insert_after_givenData(head, m, n);
            system("CLS");
            print(head);
            break;
        }
        case 5:
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