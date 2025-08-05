#include <iostream>     
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

int findMax(int a[], int n) {
    int max = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void Insert(Node** bin, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (*bin == NULL || value < (*bin)->data) {
        temp->next = *bin;
        *bin = temp;
    } else {
        Node* current = *bin;
        while (current->next != NULL && current->next->data <= value)
            current = current->next;
        temp->next = current->next;
        current->next = temp;
    }
}

// Function to delete the first node from the bin and return its value
int Delete(Node** bin) {
    Node* temp = *bin;
    *bin = (*bin)->next;
    int x = temp->data;
    delete temp;
    return x;
}

void BinSort(int a[], int n) {
    int max, i, j;
    Node **Bins;
    max = findMax(a,n);
    Bins = new Node *[max+1];
    for(i = 0; i < max + 1; i++) {
        Bins[i] = NULL;
    }
    for(i = 0; i < n; i++) {
        Insert(&Bins[a[i]], a[i]);
    }

    i = 0, j = 0;
    while(i < max + 1) {
        while(Bins[i] != NULL) {
            a[j++] = Delete(&Bins[i]);
        }
        i++;
   }
}


int main() {
    

   int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    BinSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    
    return 0;
}
