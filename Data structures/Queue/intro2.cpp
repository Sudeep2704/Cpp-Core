#include <iostream>     
using namespace std;


struct Queue {
int size;
int front;
int rear;
int *Q;

};


void enqueue(struct Queue *q, int x) {
if(q->rear == q->size - 1) {
    cout << "Queue full" << endl;
}
else {
    q->rear++;
    q->Q[q->rear] = x;
}
}

int dequeue(struct Queue *q) {
    int x = -1;
    if(q->front == q->rear) {
        cout << "Empty Queue" << endl;
    }
    else {
        q->front++;
        x = q->Q[q->front];
    }
    return x;

}

void display(struct Queue q) {
    if(q.front == q.rear) {
        cout << "queue is empty" << endl;
        return;
    }
    else {
        cout << "Queue elements" << endl;
        for(int i = q.front + 1; i <= q.rear; i++){
            cout << q.Q[i] << " ";
        }
    }
}


int main() {
    
struct Queue q;
q.size = 7;
q.Q = new int[q.size];
q.front = q.rear = -1;

enqueue(&q, 10);
enqueue(&q, 20);
enqueue(&q, 30);
enqueue(&q, 40);
enqueue(&q, 50);
enqueue(&q, 60);
display(q);
cout << endl;
cout << dequeue(&q);
display(q);


    return 0;
}
