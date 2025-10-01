#include <iostream> 
#include <array>  
#include <tuple>  
using namespace std;

int main() {
    

    array<int , 6> ar = {1,2,3,4,5,6};
   cout << ar.at(0) << endl;
   cout << get<8>(ar) << endl;
   cout << ar[2] << endl;

    
    return 0;
}
