#include <iostream>     
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    
vector<int> v = {5,3,1,10,3,3,7,7,8};
vector<int>::iterator ip;
std::partial_sort(v.begin(), v.begin() + 1, v.end());
ip = v.begin();
cout << *ip << " ";
   
  
    return 0;
}
