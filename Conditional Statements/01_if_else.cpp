#include <iostream>
using namespace std;

// Program demonstrating if-else statements

int main() {
    
    cout << "=== If-Else Statements ===" << endl;
    cout << endl;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    // Simple if statement
    if (age >= 18) {
        cout << "You are an adult." << endl;
    }
    
    cout << endl;
    
    // If-else statement
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }
    
    cout << endl;
    
    // If-else if-else statement
    if (age < 13) {
        cout << "You are a child." << endl;
    } else if (age < 18) {
        cout << "You are a teenager." << endl;
    } else if (age < 60) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }
    
    cout << endl;
    
    // Checking even or odd
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }
    
    return 0;
}
