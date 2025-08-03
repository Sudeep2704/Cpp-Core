#include <iostream>     
using namespace std;

void insert(int a[], int n){

int temp, i = n;
temp = a[n];
while(i > 1&& temp > a[i/2]) {
    a[i] = a[i/2];
    i = i/2;
}
a[i] = temp;


}

void print(int a[], int n) {
    for(int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


int main() {
    

   int heap[100]; // 1-based indexing
    int n = 0;

    int values[] = {10, 40, 20, 60, 30};
    for(int i = 0; i < 5; i++) {
        n++;
        heap[n] = values[i];
        insert(heap, n);
    }

    printf("Max Heap: ");
    print(heap, n);
    return 0;
}

