#include <iostream> 
#include <unordered_set>    
using namespace std;

int main() {
    

    unordered_set<int> us = {1,2,3,4,5};
    auto it  = next(us.begin(), 3);
    cout << *it;
    return 0;
}
