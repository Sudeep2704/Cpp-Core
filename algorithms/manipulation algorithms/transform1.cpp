#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main() {
    

   vector<int> v = {1,2,3,4,5};
   vector<int> v1 = {6,7,8,9,10};
   vector<int> v2(v.size());
   transform(v.begin(),v.end(),v1.begin(), v2.begin(), add);
   for(int i : v2) {
    cout << i << " ";
   }

    
    return 0;
}
