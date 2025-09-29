#include <iostream>     
using namespace std;

int binarySearch(int l, int h, int key, int ar[]) {
if(l > h) {
    return -1;
}
int mid = (l+h) / 2;
if(key == ar[mid]) {
    return mid;
}
else if(key < ar[mid]) {
return binarySearch(l, mid - 1, key, ar);
}
else {
    return binarySearch(mid + 1, h, key, ar);
}
}

int main() {
    

int arr[] =  {4,3,5,1,7,9,6};
cout << binarySearch(0,6,6,arr);

    
    return 0;
}

