#include <iostream>     
using namespace std;

int main() {
    

    string str = "Hello Sudeep";

    for(auto it = str.begin(); it != str.end(); ++it) {
        cout << *it;
    }

    
    return 0;
}
