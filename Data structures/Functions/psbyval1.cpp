#include <iostream>     
using namespace std;

void modify(int x) {
    x = x + 10;
    cout << x << endl;
}



int main() {
    

    cout << "Hello, World!" << endl;
    int z = 10;
     modify(z);
    cout << z << endl;
    
    return 0;
}
