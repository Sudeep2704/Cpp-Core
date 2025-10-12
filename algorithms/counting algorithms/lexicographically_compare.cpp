#include <iostream>     
#include <algorithm>
using namespace std;

int main() {
    
            char one[] = "geeksforgeeks";
            char two[] = "gfg";

            if(lexicographical_compare(one, one + 13, two, two + 3)) {
                cout << "geeksforgeeks is lexicographically less than gfg";
            }
            else {
                cout << "geeksforgeeks is not lexicographically less than gfg";
            }

    
    return 0;
}
