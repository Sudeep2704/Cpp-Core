#include <iostream>
using namespace std;

// Merge two sorted halves a[l..mid] and a[mid+1..h]
void Merge(int a[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int b[h + 1];  // Temporary array

    while (i <= mid && j <= h) {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= mid)
        b[k++] = a[i++];

    while (j <= h)
        b[k++] = a[j++];

    for (i = l; i <= h; i++)
        a[i] = b[i];
}

// Recursive Merge Sort function
void MergeSort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        MergeSort(a, l, mid);       // Sort first half
        MergeSort(a, mid + 1, h);   // Sort second half
        Merge(a, l, mid, h);        // Merge the two halves
    }
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    MergeSort(a, 0, n - 1);  // Recursive merge sort call

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
