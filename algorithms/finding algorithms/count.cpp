#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> vs = {1,2,3,6,2,2,7,2};
    cout << count(vs.begin(), vs.end(), 2);

    
    return 0;
}
