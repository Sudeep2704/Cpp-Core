#include <iostream>     
using namespace std;

int main() {
    
    int a, b, option;
    cout << "Enter two Numbers" << endl;
    cin >> a;
    cin >> b;
    cout << "Enter the operation you want to perform" << endl;
    
    
    cout << "1. Addition" << endl;
    cout << "2. Multiplication" << endl;
    cout << "3. Subtraction" << endl;
    cout << "4. division" << endl;
    cout << "5. Square" << endl;
    
    cout << "Enter the option" << endl;
    cin >> option;
    switch(option) {
        case 1: 
        cout << a+b << endl;
        break;
        case 2: 
        cout << a*b;
        break;
        case 3: 
        cout << a-b;
        break;
        case 4: 
        cout << a/b;
        break;
        case 5:
        cout << (a+b)*(a+b);
        break;
        default : 
        cout << "Never mind!";
        break;
    }
    return 0;
}
