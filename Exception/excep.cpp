#include <iostream>     
using namespace std;

int main() {
    

    int x = 3;
    try {
        if(x % 2 != 0) {
            throw -1;
        }
        else {
            cout << "Sucessfull Run" << endl;
        }
    }
    catch(int e) {
        cout << "EXCEPTION CAUGHT" << e;
    }

    
    return 0;
}

