#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>v) {
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
}


int main() {
    

   vector<int> v = {1,2,3,4,5,6,7,8,9};
   int old_val = 5, new_val = 10;
   cout << "Before replacing the values :";
   print(v);
   replace(v.begin(), v.end(), old_val, new_val);
    cout << "Afte replacing the values : ";
    print(v);
    
    return 0;
}
