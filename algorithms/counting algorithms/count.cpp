#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,2,3,6,3,2,2,7};
    cout << count(v.begin(), v.end(), 2);

    
    return 0;
}
