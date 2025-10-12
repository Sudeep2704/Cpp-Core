#include <iostream>     
#include <algorithm>

using namespace std;

int main() {
    

    string a = "SILENT";
    string b = "LISTEM";
    if(is_permutation(a.begin(), a.end(), b.begin())) {
        cout << "Anagrams";
    }
    else {
        cout << "Not Anagrams";
    }

    
    return 0;
}
