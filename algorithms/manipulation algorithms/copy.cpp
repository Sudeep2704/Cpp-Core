#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

   vector<int> v = {1,2,3,4,5};
   vector<int> v1(5);

   copy(v.begin(), v.end(), v1.begin());
  for(auto x : v1) {
    cout << x << endl;
  } 
    
    return 0;
}
