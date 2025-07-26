#include <iostream>     
using namespace std;

int main() {
    

    cout << "Ternanry Operator demostration" << endl; 
    int rating;
    cout << "Enter the rating of your choice" << endl;
    cin >> rating;
    cout << (rating > 4 ? "Yes" : "No") << endl;
    
    return 0;
}
