#include <iostream>     
using namespace std;


void InsertionSort(int a[], int n) {
for(int i = 1; i < n; i++) {
int j = i - 1;
int x = a[i];
while(j > -1 && a[j] > x) {
    a[j+1] = a[j];
    j--;
}
a[j+1] = x;
}
}



int main() {
    

    cout << "Insertion sort demonstration" << endl;
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before Insertion sort" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    InsertionSort(a, n);

    cout << "After Insertion sort" << endl;
    for(int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }

    
    return 0;
}
