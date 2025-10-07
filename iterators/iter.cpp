#include <iostream>
#include <vector>     
using namespace std;

int main() {
    

   vector<int> v = {1,2,3,4,5};

   auto first = v.begin();
   auto last = v.end();

   while(first != last) {
    cout << *first << " ";
    first++;
   }


    
    return 0;
}
