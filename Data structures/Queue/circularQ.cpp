#include <iostream>     
using namespace std;


struct Queue {

int front;
int rear;
int size;
int *Q;

};

void enqueue(struct Queue *q, int x) {

    if((q->rear+1)%q->size == q->front) {
        cout << "Queue is full" << endl;
        return;
    }
    else {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }

}

int dequeue(struct Queue *q) {
    int x = -1;
    if(q->front == q->rear) {
        cout << "Queue empty" << endl;
    }
    else {
        q->front = (q->front+1)%q->size;
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
    q.size = 5;
    q.Q = new int[q.size];
    q.front = q.rear = -1;
    enqueue(&q, 10);
    enqueue(&q, 20);
    display(q);
    dequeue(&q);
    cout << endl;
    display(q);
    
    return 0;
}
