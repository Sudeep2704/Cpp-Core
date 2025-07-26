//implementation of structure inside a class
#include <iostream>     
using namespace std;

class Rectangle {
    private:
    struct Dimension {
        int length;
        int breadth;
    };

    Dimension dim;

    public:
    Rectangle() {
        dim.breadth = 0;
        dim.length = 0;
    }

    Rectangle(int x, int y) {
        dim.length = x;
        dim.breadth = y;
    }
    int area() {
        return dim.length*dim.breadth;
    }
    int perimeter() {
        return 2*(dim.length+dim.breadth);
    }
    void setLength(int x) {
        dim.length = x;
    } 
    void setBreadth(int y) {
        dim.breadth = y;
    }
    int getLength() {
        return dim.length;
    }
    int getBreadth() {
        return dim.breadth;
    }
};


int main() {
    

    Rectangle r(5,6);
    cout << "Area" << r.area() << endl;
    
    return 0;
}
