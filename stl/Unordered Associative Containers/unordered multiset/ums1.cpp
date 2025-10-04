#include <iostream>     
#include <unordered_set>
using namespace std;

int main() {
    

   unordered_multiset<int> ums = {1,2,3,4,5,1,2};
   auto it = ums.find(2);
        cout << *it;
    return 0;
}
