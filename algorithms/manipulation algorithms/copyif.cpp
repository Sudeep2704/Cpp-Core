#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int func(int i) {
    return i % 2 == 0;
}


int main() {
    
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<int> v1(8);
copy_if(v.begin(), v.end(), v1.begin(),func);
for(int i : v1) {
    cout << i << " ";
}
    
    return 0;
}
