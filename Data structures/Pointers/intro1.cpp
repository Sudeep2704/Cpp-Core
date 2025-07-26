//Accessing memeory in the heap

#include <iostream>     
using namespace std;

int main() {
    
int *p;
p = (int *)malloc(sizeof(int));
cout << p << endl;
delete p;   //free the heap memory created
    return 0;
}
