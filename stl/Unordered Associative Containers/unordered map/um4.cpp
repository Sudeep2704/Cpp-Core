#include <iostream>     
#include <unordered_map>
using namespace std;

int main() {
    

    unordered_map<int, string> um;
    um.insert({1,"Sudeep"});
    um.insert({2,"kumar"});
    um.insert({3, "Manna"});

    

    um.erase(2);
    auto it = um.find(2);
    cout << it->first << "  " << it->second;

    return 0;
}
