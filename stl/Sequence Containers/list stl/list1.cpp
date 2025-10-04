#include <iostream> 
#include <list>   
#include <iterator> 
using namespace std;

int main() {
    
list<int>l = {3,2};
l.push_front(1);
l.push_back(5);

cout << l.front();
cout << l.back(); 
cout << endl;

l.front() = 11;
cout << l.front() << endl;

l.pop_back();
l.pop_front();


    return 0;
}
