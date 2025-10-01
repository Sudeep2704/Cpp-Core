#include <iostream>
#include <array>     
using namespace std;

int main() {
    
array<int,6> ar;
array<int, 0> ar1;

cout << ar1.empty() << endl;
    ar.fill(1);
cout << ar.empty();
    
    return 0;
}
