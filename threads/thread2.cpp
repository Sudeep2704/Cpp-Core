#include <iostream>
#include <thread>     
using namespace std;


int main() {
int n = std::thread::hardware_concurrency();
cout << n;

    
    return 0;
}
