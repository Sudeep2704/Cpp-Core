#include <iostream>     
#include <unordered_set>
using namespace std;


int main() {
    

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    for(auto it = us.begin(); it != us.end(); ++it) {
        cout << *it << " "; 
    }

    
    return 0;
}
