#include <iostream>  
#include <set>   
using namespace std;

int main() {
    

    set<int> s= {2,3,5};
    s.insert(1);
    s.insert(4);
   cout << s.count(6);
   for(auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
   }
    s.erase(1);
    return 0;
}
