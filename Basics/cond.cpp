#include <iostream>     
using namespace std;

int main() {
    
    int ag;
    cout << "Driving Liscense Eligibilty" << endl;
    cout << "Enter your age" << endl;
    cin >> ag;
    if(ag >= 18) {
        cout << "Congo! You're Eligible";
    }
    else {
        cout << "Next Time";
    }

    
    return 0;
}
