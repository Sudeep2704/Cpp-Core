#include <bits/stdc++.h>  
using namespace std;

int main() {
    

    try {
        int choice;

        cout << "Enter 1 for invalid arguments " << " Enter 2 for out_of_range exception " ;
        cin >> choice;  
        if(choice == 1) {
            throw invalid_argument("Invalid Args");
        }
        else if(choice == 2) {
            throw out_of_range("out of range");
        }
        else {
            throw "unkown Exception";
        }

    }
    catch(invalid_argument e) {
        cout << "Exception caught: " << e.what();
    }
    catch(out_of_range e) {
        cout << "Exception caught: " << e.what();
    }
    
    
    return 0;
}
