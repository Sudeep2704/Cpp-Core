#include <iostream>     
#include <algorithm>
using namespace std;

bool iscomp(int a, int b) {
    return a > b;
}

int main() {
    
int arr[]  =  {1,5,8,9,6,7,3,7,5};
int n = sizeof(arr) / sizeof(arr[0]);
stable_sort(arr, arr + n, iscomp);
for(auto x : arr) {
    cout << x << " ";
}

    
    return 0;
}
