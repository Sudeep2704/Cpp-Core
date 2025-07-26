#include <iostream>     
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *q;
};


int main() {
    
struct Queue qt;
qt.size = 5;
qt.q = new int[qt.size];   
qt.front = qt.rear = -1;

    
    return 0;
}
