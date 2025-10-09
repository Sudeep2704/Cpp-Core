#include <iostream>     
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int>v) {
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    
vector<int> v1 = {1,2,3,4,5};
vector<int> v2 = {6,7,8,9,10};

cout << "Before swapping" << endl;
print(v1);
print(v2);

swap(v1,v2);

cout << "After swapping" << endl;
print(v1);
print(v2);
    
    return 0;
}
