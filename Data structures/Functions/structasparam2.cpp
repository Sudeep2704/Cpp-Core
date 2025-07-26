//call by address
#include <iostream>     
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int area(struct rectangle *r) {
    r->breadth++;
    return r->breadth*r->length;

}



int main() {
    

struct rectangle r1 = {1,4};
cout << area(&r1);

    
    return 0;
}
