#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

bool Iscomp(int a, int b) {
   return  a > b;
}

int main() {
    

    vector<int> v = {5,2,1,4,3};
    sort(v.begin(), v.end(), Iscomp);
    for(auto x : v) {
        cout << x << " ";
    }
    return 0;
}
