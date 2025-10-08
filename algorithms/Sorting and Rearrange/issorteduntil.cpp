#include <iostream>     
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    

    int arr[] = {1,2,3,8,5,6};
    int *ip;
    ip = is_sorted_until(arr, arr+6);
    cout << (ip - arr) << " "  << *ip;

    
    return 0;
}
