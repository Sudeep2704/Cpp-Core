#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<int> v = {1,2,3,6,3,2,2,7};
    vector<int> v1 = {1,2,4,6,3,2,2,7};
    pair< vector<int>::iterator,
	vector<int>::iterator > mispair;
    mispair = mismatch(v.begin(), v.end(), v1.begin());
    cout << *mispair.first << endl;
    cout << *mispair.second << endl;
    return 0;
}
