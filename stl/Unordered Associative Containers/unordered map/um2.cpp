
#include <iostream>     
#include <unordered_map>
using namespace std;

int main() {
    

    unordered_map<int, string> um = {{1,"My"}, {2, "Name is"}, {3, "Sudeep"}};
    
        cout << um[2] << endl;
        cout << um.at(1);
    
    return 0;
}
