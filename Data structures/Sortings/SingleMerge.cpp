#include <iostream>     
using namespace std;

void Merge(int a[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int b[h + 1];  // Temporary array for merged result

    // Merge the two halves into b[]
    while (i <= mid && j <= h) {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    // Copy remaining elements from the left half
    while (i <= mid)
        b[k++] = a[i++];

    // Copy remaining elements from the right half
    while (j <= h)
        b[k++] = a[j++];

    // Copy back to original array a[]
    for (i = l; i <= h; i++)
        a[i] = b[i];
}

void MergeSort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}



int main() {
    

   int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    MergeSort(a, 0, n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    

    
    return 0;
}
