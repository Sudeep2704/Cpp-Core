#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

bool Iseven(int i) {
    if(i % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    

    vector<int> v = {1,2,3,4,5,6,7,8};
    int noeven  = count_if(v.begin(), v.end(), Iseven);

        cout << noeven;
    
    return 0;
}
