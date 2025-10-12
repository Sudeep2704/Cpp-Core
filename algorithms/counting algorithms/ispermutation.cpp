#include <iostream>     
#include <algorithm>
using namespace std;

int main() {
    

    int a[] = {1,7,0,2};
    int b[] = {0,7,2,1};

if(is_permutation(a, a+4, b)) {
    cout << "B is permutation of A";
}
else {
    cout << "b is not a permutation of a";
}

    
    return 0;
}
