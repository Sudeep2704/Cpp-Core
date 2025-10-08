#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    vector<int> vec = {1,3,5,7,9};
    cout << *lower_bound(vec.begin(), vec.end(), 6);

    
    return 0;
}
