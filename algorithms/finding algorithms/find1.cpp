#include <iostream>     
#include <array>
#include <algorithm>
using namespace std;

int main() {
    
    array<int, 5> ar = {1,3,2,5,4};
    auto it = find(ar.begin(), ar.end() , 5);
    cout << distance(ar.begin(), it);
    
    return 0;
}
