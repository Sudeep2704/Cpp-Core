#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v1  = {1,2,3,4,5};
    vector<int> v2 = {7,7,7,7,7};

    move(v1.begin(), v1.begin() + 2, v2.begin()+1);

    for(int i : v2) {
        cout << i << " ";
    }
    
    return 0;
}
