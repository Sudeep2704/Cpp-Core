#include <iostream>     
using namespace std;


int findMax(int a[], int n) {
    int max = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void CountSort(int a[], int n) {
    int max, i, j;
    int *c;
    max = findMax(a,n);
    c = new int[max+1];
    for(i = 0; i < max + 1; i++) {
        c[i] = 0;
    }
    for(i = 0; i < n; i++) {
        c[a[i]]++;
    }
    i = 0, j = 0;
    while(i < max + 1) {
        if(c[i] > 0) {
            a[j++] = i;
            c[i]--;
        }
        else {
            i++;
        }
    }
    
}


int main() {
    
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    CountSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    

    
    return 0;
}
