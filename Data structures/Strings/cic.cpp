#include <iostream>     
using namespace std;

int main() {
    
char h[] = "WELCOME";

for(int i = 0;  h[i] != '\0'; i++) {
        h[i] = h[i] + 32;
}
for(int i = 0;  h[i] != '\0'; i++) {
    cout << h[i];
}
    return 0;
}
