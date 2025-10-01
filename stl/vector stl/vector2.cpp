#include <iostream>     
#include <vector>
using namespace std;


int main() {
    

    vector<int> v = {1,2,3};
    v[1] = 50;
    cout << v.at(1);

    
    return 0;
}
