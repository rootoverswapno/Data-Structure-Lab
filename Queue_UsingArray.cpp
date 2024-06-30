#include<bits/stdc++.h>
using namespace std;
struct Queue {
    int size;
    int f;
    int r;
    int *arr;
};

bool isFull(struct Queue *q) {
    if((q->r + 1) % q->size == q->f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(struct Queue *q)
{
    if(q->f==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(struct Queue *q, int val) {
    if (isFull(q)) {
        cout << "This Queue is Full" << endl;
        return;
    } 
    if (isEmpty(q)) { // If the queue is initially empty
        q->f = 0;
        q->r = 0;
    }
     else 
    {
        q->r = (q->r + 1) % q->size;
    }
    q->arr[q->r] = val;
}

int dequeue(struct Queue *q) {
   int a=-1;
    if (isEmpty(q)) {
        cout << "This Queue is empty" << endl;
        return -1;
    } 
     if (q->f == q->r) { // If the queue becomes empty after dequeue
        q->f = -1;
        q->r = -1;
    }
     else {
        q->f = (q->f + 1) % q->size;
         a = q->arr[q->f];
    }
    return a;
}

void display(Queue *q) {
    if (isEmpty(q)) {
        cout << "Queue is empty\n";
        return;
    }
    int i = q->f;
    while (true) {
        cout << q->arr[i] << " ";
        if (i == q->r) break;
        i = (i + 1) % q->size;
    }
    cout << endl;
}

int main() {
    Queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = new int[q.size];
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
                enqueue(&q, x);
                display(&q);
                break;
            }
            case 2: {
                int xx = dequeue(&q);
                 system("CLS");
                display(&q);
                break;
            }
            case 3: {
                delete[] q.arr; // Free allocated memory
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