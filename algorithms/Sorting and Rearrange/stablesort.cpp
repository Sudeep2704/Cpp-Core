#include <iostream>     
#include <algorithm>
using namespace std;

int main() {
    
int arr[]  =  {1,5,8,9,6,7,3,7,5};
int n = sizeof(arr) / sizeof(arr[0]);
stable_sort(arr, arr + n);
for(auto x : arr) {
    cout << x << " ";
}

    
    return 0;
}
