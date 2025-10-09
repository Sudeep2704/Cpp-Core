#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    
    vector<int> v1(5);
    fill(v1.begin(), v1.end(),1);
    
    for(int i : v1) {
        cout << i << " ";
    }

    
    return 0;
}
