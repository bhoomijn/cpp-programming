#include <iostream>
using namespace std;

// Comprehensive demonstration of C++ data types
// This program shows how to declare, initialize, and use different data types

int main() {
    
    cout << "=== Integer Data Types ===" << endl;
    
    // int variable declaration and initialization
    // int is a data type that can store whole numbers (both positive and negative)
    int a = 5;
    cout << "int a = " << a << endl;
    
    int n = -10;
    cout << "int n = " << n << endl;

    cout << "\n=== Floating Point Data Types ===" << endl;
    
    // float variable declaration and initialization
    // float is a data type that can store decimal numbers (both positive and negative)
    // float has single precision (typically 32-bit)
    float b = 3.14;
    cout << "float b = " << b << endl;

    float m = -399.14;
    cout << "float m = " << m << endl;

    // double is for floating point numbers with double precision (typically 64-bit)
    // More accurate than float for decimal numbers
    double e = 3.1488159;
    cout << "double e = " << e << endl;

    cout << "\n=== Character Data Type ===" << endl;
    
    // char variable declaration and initialization
    // char is a data type that can store a single character
    // Characters are stored as ASCII values (0-127)
    char c = 'A';
    cout << "char c = " << c << endl;

    cout << "\n=== Boolean Data Type ===" << endl;
    
    // bool variable declaration and initialization
    // bool can store true (1) or false (0)
    // In output: false prints as 0, true prints as 1
    bool d = true;
    cout << "bool d = " << d << endl;

    return 0;
}
