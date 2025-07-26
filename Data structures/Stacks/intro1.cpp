#include <iostream>     
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
struct Node *top = nullptr;

void push(int x) {
    struct Node * q = new Node;
    q->data = x;
    q->next = top;
    top = q;
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int peek(int pos) {
    int x = -1;
    struct Node *p = top;
    for(int i = 0; p!=NULL && i < pos - 1; i++) {
        p = p ->next;

    }
if(p!=NULL) {
    return p -> data;
}

else {
    return -1;
}
}


int pop() {
int x = -1;
if(top == nullptr) {
    cout << "stack is empty" << endl;
}

else {
struct Node *p = top;
top = top->next;
x = p->data;
free(p);
}
return x;
}

int main() {
    

   push(10);
   push(20);
   push(30);
   push(40);
    display();
    
   
    return 0;
}
