
#include <iostream>     
#include <unordered_map>
using namespace std;

int main() {
    

    unordered_map<int, string> um = {{1,"My"}, {2, "Name is"}, {3, "Sudeep"}};
    
        um.insert({3, "Kumar"});
    for(auto x : um) {
        cout << x.first << ":" << x.second << endl;
     }
    return 0;
}
