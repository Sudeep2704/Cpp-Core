#include <iostream>     
#include <algorithm>
#include <vector>
using namespace std;

bool iscomp(int a, int b) {
    return (a < b);
}


int main() {
    
vector<int> v = {1,3,1,10,3,3,7,7,8};
vector<int>::iterator ip;
std::partial_sort(v.begin(), v.begin() + 3, v.end(), iscomp);
for(ip = v.begin(); ip != v.end(); ++ip) {
    cout << *ip << " ";
}
   
  
    return 0;
}
