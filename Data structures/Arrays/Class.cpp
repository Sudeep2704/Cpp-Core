#include <iostream>     
using namespace std;

void display(int a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i];
    }
}

void append(int A[], int x, int &length) {
    A[length] = x;
    length++;
}



int main() {
    

    int c[] = {1,2,3,4,5};
    int key  = 9, length = 5;
    for(int i = 0; i < length; i++) {
        if(key == c[i]) {
            cout << "found" << endl;
        }
    }
    cout << "Not found";

    return 0;
}
