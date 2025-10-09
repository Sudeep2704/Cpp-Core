#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,3,5,7,9};
    vector<int>::iterator itr;
    vector<int> v2;
    copy(v.begin(), v.end(), inserter(v2, itr));
    for(int i : v2) {
        cout << i << " ";
    }
    
    return 0;
}
