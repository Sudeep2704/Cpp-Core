#include <iostream>     
using namespace std;

int square(int x) {
    return x*x;
}

int main() {
    
    int a = 10;
    int z = square(a);
    cout << z << endl;
    
    return 0;
}
