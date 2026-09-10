#include <iostream>
using namespace std;

// Program demonstrating arithmetic operators
// +, -, *, /, %, ++, --

int main() {
    
    cout << "=== Arithmetic Operators ===" << endl;
    cout << endl;
    
    int a = 20;
    int b = 7;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << endl;
    
    // Addition
    cout << "Addition (a + b) = " << (a + b) << endl;
    
    // Subtraction
    cout << "Subtraction (a - b) = " << (a - b) << endl;
    
    // Multiplication
    cout << "Multiplication (a * b) = " << (a * b) << endl;
    
    // Division
    cout << "Division (a / b) = " << (a / b) << endl;
    
    // Modulus (remainder)
    cout << "Modulus (a % b) = " << (a % b) << endl;
    cout << endl;
    
    // Increment operator
    int x = 5;
    cout << "x = " << x << endl;
    cout << "x++ (post-increment) = " << x++ << " (x becomes " << x << ")" << endl;
    
    x = 5;
    cout << "++x (pre-increment) = " << ++x << " (x is " << x << ")" << endl;
    cout << endl;
    
    // Decrement operator
    int y = 5;
    cout << "y = " << y << endl;
    cout << "y-- (post-decrement) = " << y-- << " (y becomes " << y << ")" << endl;
    
    y = 5;
    cout << "--y (pre-decrement) = " << --y << " (y is " << y << ")" << endl;
    
    return 0;
}
