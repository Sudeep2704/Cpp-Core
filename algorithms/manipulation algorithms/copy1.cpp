#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,7,5,9,3};
    vector<int> v1(5);
    copy(v.begin(), v.end(), v1.begin());
    sort(v1.begin(), v1.end());
    for(int i : v1) {
        cout << i << " ";
    }

    
    return 0;
}
