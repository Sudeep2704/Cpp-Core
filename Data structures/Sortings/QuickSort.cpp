#include <iostream>     
using namespace std;

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l + 1;
    int j = h;

    while (i <= j) {
        while (i <= h && a[i] <= pivot) i++;
        while (j >= l && a[j] > pivot) j--;

        if (i < j)
            swap(a[i], a[j]);
    }

    swap(a[l], a[j]);
    return j;
}

int main() {
    int a[] = {24, 97, 40, 67, 88, 85, 15};
    int n = sizeof(a)/sizeof(a[0]);

    int p = partition(a, 0, n - 1);

    cout << "Partition index: " << p << endl;
    cout << "Array after partitioning: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}