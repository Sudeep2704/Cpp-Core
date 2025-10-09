#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,3,5,7,9,11,13,15};
    vector<int> v1(10);
    copy_backward(v.begin(), v.begin() + 8, v1.begin() + 2);
    for(int i : v1) {
        cout << i << " ";
    }

    
    return 0;
}
