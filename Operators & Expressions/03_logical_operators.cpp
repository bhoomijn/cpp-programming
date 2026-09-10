#include <iostream>
using namespace std;

// Program demonstrating logical operators
// &&, ||, !

int main() {
    
    cout << "=== Logical Operators ===" << endl;
    cout << endl;
    
    bool a = true;
    bool b = false;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << endl;
    
    // AND operator (&&)
    cout << "Logical AND (&&):" << endl;
    cout << "a && a: " << (a && a) << " (true && true = true)" << endl;
    cout << "a && b: " << (a && b) << " (true && false = false)" << endl;
    cout << "b && b: " << (b && b) << " (false && false = false)" << endl;
    cout << endl;
    
    // OR operator (||)
    cout << "Logical OR (||):" << endl;
    cout << "a || a: " << (a || a) << " (true || true = true)" << endl;
    cout << "a || b: " << (a || b) << " (true || false = true)" << endl;
    cout << "b || b: " << (b || b) << " (false || false = false)" << endl;
    cout << endl;
    
    // NOT operator (!)
    cout << "Logical NOT (!):" << endl;
    cout << "!a: " << (!a) << " (!true = false)" << endl;
    cout << "!b: " << (!b) << " (!false = true)" << endl;
    cout << endl;
    
    // Using with numbers
    int x = 5;
    int y = 10;
    int z = 5;
    
    cout << "With numbers (x=" << x << ", y=" << y << ", z=" << z << "):" << endl;
    cout << "(x > 0) && (y > 0): " << ((x > 0) && (y > 0)) << endl;
    cout << "(x > y) || (x == z): " << ((x > y) || (x == z)) << endl;
    cout << "!(x > y): " << (!(x > y)) << endl;
    
    return 0;
}
