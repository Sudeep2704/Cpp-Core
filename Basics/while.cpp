#include <iostream>     
using namespace std;

int main() {
    

   cout << "Demonstration of while loop" << endl;
   int i = 1, value;
   cout << "Enter the number upto which you want to print" << endl;
   cin >> value;
   while(i <= value) {
    cout << i << endl;
    i++;
   }

    
    return 0;
}
