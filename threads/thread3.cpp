#include <iostream>  
#include <thread>   
using namespace std;

int main() {
    

    cout << "First line" << endl;
    this_thread::sleep_for(1000ms);
    cout << "second line" << endl;
    
    return 0;
}
