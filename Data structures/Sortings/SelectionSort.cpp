#include <iostream>     
using namespace std;


void SelectionSort(int a[], int n) {
int i,j,k;
for(i = 0; i < n - 1; i++) {
    
    for(j=k=i; j < n; j++) {
        if(a[j] < a[k]) {
            k = j;
        }
        
    }
swap(a[i], a[k]);
}

}

int main() {
    

    cout << "Selection sort demonstration" << endl;
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before selection sort" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    SelectionSort(a, n);

    cout << "After Selection sort" << endl;
    for(int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }

    
    return 0;
}
