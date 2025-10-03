#include <iostream>   
#include <vector>  
using namespace std;

int main() {
    

    cout << "vector basics!" << endl;
    vector<int> v = {1,2,3,4,5};
    v.push_back(6);
    v.insert(v.begin()+1, 3);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i]<< endl;
     }

     
    
    return 0;
}
