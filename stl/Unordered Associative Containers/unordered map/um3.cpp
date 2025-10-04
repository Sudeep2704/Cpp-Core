#include <iostream>     
#include <unordered_map>
using namespace std;


int main() {
    

    cout << "Hello, World!" << endl;

    unordered_map<int, string> um;
    um.insert({1,"Sudeep"});
    um.insert({2,"kumar"});
    um.insert({3, "Manna"});
    um[2] = "kr";
    um.at(3) = "Mn";
for(auto x : um) {
        cout << x.first << ":" << x.second << endl;
     }
    
    
    return 0;
}
