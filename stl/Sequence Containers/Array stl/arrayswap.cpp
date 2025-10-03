#include <iostream>
#include <array>     
using namespace std;

int main() {
    

array<int, 6> ar = {1,2,3,4,5,6};
 array<int, 6> ar1  = {7,8,9,10,11,12};

 ar.swap(ar1);

 for(int i = 0; i < ar.size(); i++) {
    cout << ar.at(i) << " ";
 }
    return 0;
}
