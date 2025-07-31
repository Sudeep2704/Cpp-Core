#include <iostream>     
using namespace std;


struct Node {
int data;
struct Node *next;
};

struct Queue {
struct Node *front;
struct Node *rear;
};

void enqueue(struct Queue *q, int x) {

struct Node *t = new Node;
if(t==NULL) {
    cout << "Memory Allocation failed" << endl;
}
    t->data = x;
    t->next = nullptr;


if (q->front == nullptr) {
        q->front = q->rear = t;
    }
else {
        q->rear->next = t;
        q->rear = t;
    }

}

void display(Queue *q) {
    Node *p = q->front;
    if(!p) {
        cout << "Queue is empty" << endl;
        return;
    }

cout << "Queue Elements: ";
while(p!=nullptr) {
    cout << p->data << " ";
    p = p->next;
}
cout << endl;
}


int dequeue(Queue *q) {
    if(q->front == NULL) {
        cout << "Queue is empty" << endl;
         return -1;
    }
   
    struct Node *temp = q->front;
    int x = temp->data;
    q->front = q->front->next;
    if (q->front == nullptr) {
        q->rear = nullptr;
    }
    delete temp;
    return x;
}


int main() {
    
Queue q = {nullptr, nullptr};

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    cout << dequeue(&q) << endl;
    display(&q);

    
    return 0;
}
