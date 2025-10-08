#include <bits/stdc++.h>     

#include <algorithm>
using namespace std;

int main() {
    
multiset<int> ms = {2,4,1,1,6,2,7,1};
int val = 7;
auto c =  count(ms.begin(), ms.end(), val);
    if(c) {
        cout << "Exist" << endl;
    }
    else {
        cout << "Dosent exist";
    }

    
    return 0;
}
