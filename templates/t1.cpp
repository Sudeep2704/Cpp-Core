#include <iostream>     
using namespace std;

template <typename T> T mymax(T x, T y) {
    return (x > y) ? x : y;
}



int main() {
    

    cout << mymax<int>(2,3);

    
    return 0;
}
