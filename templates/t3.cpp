#include <iostream>     
using namespace std;


template <typename T1, typename T2> class geek {
    public:
    T1 x;
    T2 y;

    geek(T1 val1, T2 val2) : x(val1), y(val2) {}


    void getValues()
    {
        cout << x << " " << y << endl;
    }
};






int main() {
    

    geek<int, double> intdoubgeek(10, 23f);
    intdoubgeek.getValues(); 

    
    return 0;
}
