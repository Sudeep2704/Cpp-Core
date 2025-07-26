#include <iostream>     
using namespace std;

struct Student {
    string Name;
    int Age;
    long double mob;
};

int main() {
    
struct Student s1;
s1.Age = 21;
s1.Name = "Sudeep";
s1.mob = 9007755859;
    
cout << s1.Name;
    
    return 0;
}
