#include <iostream>     
using namespace std;

int main() {
    

    string str = "Hello World";
    str.insert(5," c++");
    cout << str << endl;
    
str.erase(5,4);
cout << str;
    
    return 0;
}
