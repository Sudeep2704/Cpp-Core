#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

bool Isodd(int i) {
    return i % 2;
}


int main() {
    

   vector<int> vec = {2,4,3,2,5};

    vector<int>::iterator it;
        it = find_if(vec.begin(), vec.end(), Isodd);
        cout << " First odd number is " << *it << " at index " << distance(vec.begin(), it) << endl; 
           

    
    
    return 0;
}
