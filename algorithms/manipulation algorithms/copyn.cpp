#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,5,7,9,11,13,15};
    vector<int> v1(5);
    copy_n(v.begin(), 5, v1.begin());
    cout << "Normal Vector elements before copying : ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    cout << "After copying the elements using : ";
    for(int i : v1) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
