#include <iostream>     
using namespace std;


template <typename T> class geek {
    public:
    T x;
    T y;

    geek(T val1, T val2) : x(val1), y(val2)
    {
    }
    void getValues()
    {
        cout << x << " " << y;
    }
};

int main() {
    

    geek<int> intgeek(10,20);
    intgeek.getValues();
    
    return 0;
}
