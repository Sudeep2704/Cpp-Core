#include <iostream>     
using namespace std;
//mergint of two list into single list with comparing the values 

void Merge(int a[], int b[], int m, int n) {
    int c[m + n];  // Resultant merged array
    int i = 0, j = 0, k = 0;

    // Merge both arrays until one is exhausted
    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Copy any remaining elements from array a
    while (i < m)
        c[k++] = a[i++];

    // Copy any remaining elements from array b
    while (j < n)
        c[k++] = b[j++];

    // Print the merged array
    cout << "Merged array: ";
    for (int x = 0; x < m + n; x++) {
        cout << c[x] << " ";
    }
    cout << endl;
}




int main() {
    

   int a[] = {1, 3, 5};
    int b[] = {2, 4, 6, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    Merge(a, b, m, n);

    
    return 0;
}
