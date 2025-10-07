#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> vec = {1,6,5,3,2};
    auto it =  find(vec.begin(), vec.end(), 2);
    cout << distance(vec.begin(), it);
    
    return 0;
}
