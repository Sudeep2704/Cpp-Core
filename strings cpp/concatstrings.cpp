#include <iostream>     
using namespace std;

int main() {
    

  string str1 = "Hello";
  string str2 = "World";

string result = str1 + str2;
cout << result << endl;

string result2 = str1;
result2.append(str2);
cout << result2 << endl;    

    return 0;
}
