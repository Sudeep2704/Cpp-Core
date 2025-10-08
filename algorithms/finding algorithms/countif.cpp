#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool isEven(int i) {
    if(i % 2 ==0) {
        return true;
    }
    else {
     return false;
    }
}

int main() {
    
vector<int> ms = {2,4,1,1,6,2,7,1};

int c =  count_if(ms.begin(), ms.end(), isEven);
   cout << "Even Count are : " << c << endl;

    
    return 0;
}
