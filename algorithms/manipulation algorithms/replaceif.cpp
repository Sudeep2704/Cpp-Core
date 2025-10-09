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

bool Isodd(int i) {
    return ((i % 2) == 0);
}

int main() {
    

   vector<int> v = {1,2,3,4,5,6,7,8,9};
int new_val = 0;
   cout << "Before replacing the values :";
   print(v);
   replace_if(v.begin(), v.end(), Isodd, new_val);
    cout << "Afte replacing the values : ";
    print(v);
    
    return 0;
}
