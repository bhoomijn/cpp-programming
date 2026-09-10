#include <iostream>
using namespace std;

// Program demonstrating for loops

int main() {
    
    cout << "=== For Loop ===" << endl;
    cout << endl;
    
    // Simple for loop
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // Reverse counting
    cout << "Counting from 5 to 1:" << endl;
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // Sum of numbers
    int sum = 0;
    cout << "Sum of numbers 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl << endl;
    
    // Multiplication table
    int n;
    cout << "Enter a number for multiplication table: ";
    cin >> n;
    
    cout << "\nMultiplication table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
    
    return 0;
}
