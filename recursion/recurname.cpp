#include <iostream>     
using namespace std;

void fun(int i, int n) {
    if(i > n) return;
    cout << "Sudeep" << endl;
    fun(i+1, n);
    
}


int main() {
    

   fun(1,5);

    
    return 0;
}
