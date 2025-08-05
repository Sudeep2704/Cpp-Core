#include <iostream>
using namespace std;

void Merge(int a[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int b[h + 1];

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

void IterativeMergeSort(int a[], int n) {
    int p, l, mid, h, i;

    // p is the size of subarrays to merge
    for (p = 2; p <= n; p = p * 2) {
        for (i = 0; i + p - 1 < n; i = i + p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(a, l, mid, h);
        }

        // Handle the leftover part
        if (i + p / 2 < n) {
            l = i;
            h = n - 1;
            mid = (l + h) / 2;
            Merge(a, l, mid, h);
        }
    }

    // Final merge in case n is not a power of 2
    if (p / 2 < n)
        Merge(a, 0, p / 2 - 1, n - 1);
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    IterativeMergeSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
