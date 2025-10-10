#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,2,3,4,5,6,7,9};
    vector<int> v1 = {1,2,3,4,5,6,7,9};

    int result =  equal(v.begin(), v.end(), v1.begin());

    if(result == 0) {
        cout << "Not Equal";
    }
    else {
        cout << "Equal";
    }
    return 0;
}
