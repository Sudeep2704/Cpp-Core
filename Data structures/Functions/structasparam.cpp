//call by value
#include <iostream>     
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    r.length++;
    return r.breadth*r.length;
}

int main() {
    

    struct Rectangle r1 = {1,4};
    cout << area(r1);


    
    return 0;
}
