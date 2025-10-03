#include <iostream>  
#include <array>   
using namespace std;

int main() {
    

    array<int, 6> ar = {1,2,3,4,5,6};
    cout << ar.size() << endl;
    cout << ar.max_size();
    return 0;
}
