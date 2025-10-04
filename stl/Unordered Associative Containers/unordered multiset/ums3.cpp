#include <iostream>     
#include <unordered_set>
using namespace std;

int main() {
    

    unordered_multiset<int> ums = {1,2,3,4,5,3,1};

        ums.erase(ums.find(3));
        
        for(auto x : ums) {
            cout << x << endl;
        }

    return 0;
}
