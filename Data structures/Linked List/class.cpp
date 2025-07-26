#include <iostream>     
using namespace std;

//structure for Linked list
struct Node {
    int data;
    struct Node *next;
};

//function for creating nodes
struct Node *createNode(int x) {
struct Node *NewNode = new Node;
NewNode->data = x;
NewNode->next = NULL;
return NewNode;
}

//display function
void display(struct Node *a) {
    struct Node *t = a;
    while(t!=NULL) {
        cout << t->data;
        t = t->next;
    }
}

//count of the number of nodes 
int nodeCount(struct Node *p) {
    int count = 0;
    struct Node *temp = p;
    while(temp!=NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

int sumNodes(struct Node *p) {
    int sum = 0;
    struct Node *d = p;
    while(d!=NULL) {
        sum += d->data;
        d = d->next;
    }
    return sum;
}

int max(struct Node *p) {
    int m = -3278, MIN_INT, max;
    while(p!=NULL) {
        if(p->data > m) {
            max = p->data;
            p = p->next;
        }

    }
    return max;
}

void insertatLast(int x, struct Node *p) {

struct Node *LastNode = new Node;
LastNode->data = x;
struct Node *temp = p;
while(temp->next!=NULL) {
    temp = temp -> next;
}
temp->next = LastNode;
LastNode->next = NULL;
}

int main() {
    

    struct Node *head = createNode(10);
    struct Node *second = createNode(20);
    struct Node *third = createNode(30);
    struct Node *fourth = createNode(40);   
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

   

    insertatLast(50, head);
    display(head);

    return 0;
}
