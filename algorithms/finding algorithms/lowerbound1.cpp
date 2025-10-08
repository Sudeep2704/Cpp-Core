#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    vector<int> vec = {1,3,5,7,9};
    int val = 6;
    auto it = lower_bound(vec.begin(), vec.end(), val);
    if(*it == val) {
        cout  << "found" << *it;
    }
    else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
