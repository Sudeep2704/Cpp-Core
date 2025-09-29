#include <iostream>    
#include <thread> 
using namespace std;

void func() {
    cout << " Hello from the thread!. " << endl;
}

int main() {
    


thread t(func);
t.join();
cout << "Main thread finished";
    
    return 0;
}
