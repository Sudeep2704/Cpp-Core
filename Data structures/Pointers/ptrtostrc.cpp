#include <iostream>     
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int main() {
    
struct Rectangle r;
struct Rectangle *p = &r;
p->breadth = 10;
p->length = 20;
cout << &p->breadth << endl;
cout << &r.breadth << endl;

    
    return 0;
}
