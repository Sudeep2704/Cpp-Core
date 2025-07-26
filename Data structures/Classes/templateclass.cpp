//implementation of template class
#include <iostream>     
using namespace std;

template<class T>
class Arithmetic {
    private:
    T a;
    T b;

    public:
    Arithmetic(T x, T y) {
        a = x;
        b = y;
    }
    T Add() {
        return a+b;
    }
    T Mul() {
        return a*b;
    }

};

int main() {
    

    Arithmetic <float> a(2.789,3.908);
    cout << a.Add();

    
    return 0;
}
