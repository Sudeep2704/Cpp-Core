#include <iostream>     
#include <vector>
using namespace std;


int main() {
    
vector<int> vec = {1,2,3,4,5}; 
   auto it = vec.rbegin();
   while(it != vec.rend()) {
    cout << *it << endl;
        it++;
   }

    
    return 0;
}
