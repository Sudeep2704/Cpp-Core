#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    vector<int> vec = {1,3,5,7,9};
    int val = 6;
    auto it = lower_bound(vec.begin(), vec.end(), val);
    cout << "Smaller element: " << it - vec.begin() << endl;
    cout << "larger element: " << vec.size() - (it - vec.begin()) << endl;
    return 0;
}
