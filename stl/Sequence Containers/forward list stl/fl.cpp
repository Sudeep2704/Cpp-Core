#include <iostream>  
#include <forward_list>   
using namespace std;

int main() {
    

    forward_list<int> fl = {1,2,3,4,5};
   cout << fl.front();
    fl.push_front(1.5);
    cout << fl.empty();
    
    return 0;
}
