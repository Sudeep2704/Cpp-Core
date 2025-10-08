#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    vector<string> vs = {"geeks", "for", "geeks", "for", "for"};
    cout << count(vs.begin(), vs.end(), "for");

    
    return 0;
}
