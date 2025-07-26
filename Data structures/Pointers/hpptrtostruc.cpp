#include <iostream>     
using namespace std;

struct rectangle {
int length;
int breadth;
};

int main() {
    
struct rectangle *p;
p  = (struct rectangle *)malloc(sizeof(struct rectangle));
p->breadth = 10;
p->length = 20;
   
    return 0;
}
