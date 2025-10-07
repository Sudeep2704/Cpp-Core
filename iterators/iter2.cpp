#include <iostream>     
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    

    vector<int> vec = {30,10,40,10,50};
    cout << count(vec.begin(), vec.end(), 10);

    
    return 0;
}
