#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int add(int i) {
    return i+1;
}

int main() {
    

   vector<int> v = {1,2,3,4,5};
   vector<int> v1(v.size());
   transform(v.begin(),v.end(),v1.begin(), add);
   for(int i : v1) {
    cout << i << " ";
   }

    
    return 0;
}
