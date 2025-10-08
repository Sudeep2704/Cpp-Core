#include <iostream>     
#include <array>
#include <algorithm>
using namespace std;

int main() {
    

    int arr[5] = {1,3,9,5,2};
    auto it = find(arr, arr + 5, 9);
    cout << distance(arr, it);
    
    return 0;
}
