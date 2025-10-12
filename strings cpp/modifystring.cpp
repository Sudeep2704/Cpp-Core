#include <iostream>     
#include <string>
using namespace std;

int main() {
    

    string str = "Hello World";

    str.push_back('!');
    cout << str;

    str.pop_back();
    cout << str;
    
    return 0;
}
