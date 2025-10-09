#include <iostream>     
#include <algorithm>
using namespace std;

char lowercase(char s) {
    return tolower(s);
}

int main() {
    
    string s = "GEEKSFORGEEKS";
    transform(s.begin(), s.end(), s.begin(), lowercase);
   cout << s << endl;

    
    return 0;
}
