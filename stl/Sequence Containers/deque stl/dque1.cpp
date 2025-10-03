#include <iostream>  
#include <deque>   
using namespace std;

int main() {
    

    deque<int> d;
   d.push_front(10);
   d.push_front(20);
   d.push_front(30);
   d.push_back(40);
   for(int i = 0; i < d.size(); i++) {
    cout << d[i] << " ";
   }
   cout << endl;
    d.pop_back();
    d.pop_front();
    for(int i = 0; i < d.size(); i++) {
    cout << d[i] << " ";
   }
    return 0;
}
