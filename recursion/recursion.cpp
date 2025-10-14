#include <iostream>     
using namespace std;

void fun(int n) {
     if(n == 0) return;
    cout << 1;
   
    fun(n-1);

}



int main() {
    

    fun(5);

    
    return 0;
}
