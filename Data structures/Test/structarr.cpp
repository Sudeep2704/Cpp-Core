#include <iostream>     
using namespace std;

struct array {
int size;
int a[100];
int length;
};


void display(struct array ar) {
    for(int i = 0; i < ar.length; i++) {
        cout << ar.a[i] << " ";
    }
}

void insert(struct array &arr, int value) {
    arr.a[arr.length] = value;
    arr.length++;
}


void insertatpos(struct array &arr, int pos, int value) {
    for(int i = arr.length; i > pos - 1; i--) {
        arr.a[i]  = arr.a[i - 1];
    }
    arr.a[pos] = value;
    arr.length++;
}

void append(struct array &arr, int value) {
    arr.a[arr.length] = value;
    arr.length++;
}

void deleteatpos(struct array &arr, int index) {
    int x;
    if(index > arr.length) {
        int x = arr.a[index];
    }
    for(int i = index; i < arr.length-1; i++) {
        arr.a[i] = arr.a[i+1];
    }
    arr.length--;
}

int search(struct array arr, int value) {
    for(int i = 0; i < arr.length; i++) {
        if(arr.a[i] == value) {
            return arr.a[i];
        }
    }
    return -1;
}

int get(struct array arr, int index) {
    int x;
     x  = arr.a[index];
     return x;
}

void set(struct array &arr, int value, int index) {
    arr.a[index] = value;
}

int max(struct array arr) {
    int x = -1;
    for(int i = 0; i < arr.length; i++) {
        if(arr.a[i] > x) {
            x = arr.a[i];
        }
    }
    return x;
}

int min(struct array arr) {
    int x = 100;
    for(int i = 0; i < arr.length; i++) {
        if(arr.a[i] < x) {
            x = arr.a[i];
        }
    }
    return x;
}

int sum(struct array arr) {
    int total = 0;
    for(int i = 0; i < arr.length; i++) {
        total += arr.a[i];
    }
    return total;
}

void reverse(struct array &arr) {
    int b[6];
    for(int i = arr.length - 1, j = 0; i >= 0; i--, j++) {
        b[j]  = arr.a[i];
    }
    for (int i = 0; i < arr.length; i++) {
        arr.a[i] = b[i];
    }
}


int main() {
    
struct array arr; 
    arr.size = 10;
    arr.length = 0;

    insert(arr, 10);
    insert(arr, 20);
    insert(arr, 30);
    insert(arr, 40);
    insert(arr, 50);
    insert(arr, 60);
    display(arr);
    cout << endl;
   reverse(arr);
   display(arr);
    
    return 0;
}
