#include <iostream>

// namespace standard 
using namespace std;

/// @brief adds numbers
/// @param a 
/// @param b 
/// @return ostream string
void addNumbers(int a, int b){
    cout << endl << a << " + " << b << " = " << a+b << endl; 
}

void addNumberXTimes(int a, int b){
    int count = 0;
    while (true) {
        a += a;
        count++;
        if (a*b == a){
            break;
        }
    }
}