#include <iostream>
using namespace std;

// Program demonstrating comparison operators
// ==, !=, <, >, <=, >=

int main() {
    
    cout << "=== Comparison Operators ===" << endl;
    cout << endl;
    
    int a = 10;
    int b = 5;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << endl;
    
    // Equal to
    cout << "a == b: " << (a == b) << " (false is 0, true is 1)" << endl;
    
    // Not equal to
    cout << "a != b: " << (a != b) << endl;
    
    // Greater than
    cout << "a > b: " << (a > b) << endl;
    
    // Less than
    cout << "a < b: " << (a < b) << endl;
    
    // Greater than or equal to
    cout << "a >= b: " << (a >= b) << endl;
    
    // Less than or equal to
    cout << "a <= b: " << (a <= b) << endl;
    cout << endl;
    
    // Testing with equal values
    int c = 10;
    cout << "\nWith c = " << c << ":" << endl;
    cout << "a == c: " << (a == c) << " (true)" << endl;
    cout << "a >= c: " << (a >= c) << " (true)" << endl;
    cout << "a <= c: " << (a <= c) << " (true)" << endl;
    
    return 0;
}
