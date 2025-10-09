#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,7,5,9,3};
    auto ne = remove(v.begin(), v.end(), 7);
        v.erase(ne, v.end());
    for(int i : v) {
        cout << i << " ";
    }

    
    return 0;
}
