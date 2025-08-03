#include <iostream>     
using namespace std;

void BubbleSort(int a[], int n) {
for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n-1-i; j++) {
        if(a[j] > a[j+1]) {
            swap(a[j], a[j+1]);
        }
    }
}
}

int main() {
    

    cout << "Bubble sort demonstration" << endl;
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before Bubble sort" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    BubbleSort(a, n);

    cout << "After Bubble sort" << endl;
    for(int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }

    
    return 0;
}
