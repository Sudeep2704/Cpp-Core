#include <iostream>  
#include <array>   
using namespace std;

int main() {
    

   array<int , 6> ar = {1,2,3,4,5,6};
   cout << ar.front() << endl;
   cout << ar.back() << endl; 

   int &a = ar.front();
   int &b = ar.back();
     a = 10;
    b = 60;
    
   cout << ar.front() << endl;
   cout << ar.back() << endl; 
    
    return 0;
}
