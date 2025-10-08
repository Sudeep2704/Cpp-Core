#include <iostream>     
#include <algorithm>
using namespace std;

bool iscomp(int a, int b) {
    return a > b;
}


int main() {
    

    int arr[5] = {5,2,4,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort( arr, arr + n, iscomp);
    for(auto x : arr) {
        cout << x << " ";
    }
    return 0;
}
