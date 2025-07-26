#include <iostream>     
using namespace std;

int main() {
    
    int size;
    cout << "Enter array size" << endl;
    cin >> size;
    int A[size];
    cout << "Enter Array elements" << endl;
    for(int i = 0; i < size; i++) {
        cin >> A[i];
    }
    cout << "Display" << endl;
    for(int i = 0; i < size; i++) {
        cout << A[i];
    }
    return 0;
}
