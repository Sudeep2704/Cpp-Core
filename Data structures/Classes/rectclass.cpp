#include <iostream>     
using namespace std;

class Rectangle {

private:
int length;
int breadth;

public:
Rectangle() {
length = 0;
breadth = 0;
}

Rectangle(int x, int y) {
    length = x;
    breadth = y;
}

int area() {
    return length*breadth;
}

int perimeter() {
    return 2*(length+breadth);
}

void setLength(int l) {
length = l;
}

void setBreadth(int b) {
    breadth = b;
}

int getLength() {
    return length;
}

int getBreadth() {
    return breadth;
}
};

int main() {
    

    Rectangle r(10,5);
    cout << "Area" << r.area();

    
    return 0;
}
