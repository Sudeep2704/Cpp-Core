#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int gen() {
    static int i = 0;
    ++i;
    return i;
}

int main() {
    

        vector<int> v(10);
        std::generate(v.begin(), v.end(), gen);
        for(auto x : v) {
            cout << x << " ";
        }

    
    return 0;
}
