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
    int hold = a;
    for (int i = 1; i < b; i++) {
        a += hold;
        cout << hold << " + ";
    }
    cout << hold << " = " << a << endl;
}