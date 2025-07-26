#include <iostream>     
using namespace std;

int main() {
    

    char Name[] = "Sudeep";
    int count  = 0;
    for(int i = 0; Name[i] != '\0'; i++) {
        count++;
    }
    cout << "length of the string is "<< count << endl;
    
    return 0;
}
