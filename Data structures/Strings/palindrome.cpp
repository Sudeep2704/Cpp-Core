#include <iostream>     
using namespace std;

int main() {
    
    int count = 0, i = 0;
    char d[6];
    char s[] = "madam";
    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    for(int j = count - 1;  j >= 0; j--, i++) {
        d[i] = s[j];
    }
    for(int i = 0; d[i] != '\0'; i++) {
        cout << d[i];
    }
    

    return 0;
}
