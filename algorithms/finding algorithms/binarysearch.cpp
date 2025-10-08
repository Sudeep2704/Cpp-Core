#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

        vector<int> vec = {1,3,5,7,9,11,13,15};
        int target = 2;
        if(binary_search(vec.begin(), vec.end(), target)) {
            cout << target << " found " << endl;
        }
        else {
            cout << "Not found" << endl;
        }

    
    return 0;
}
