#include <iostream>
using namespace std;

// Program demonstrating basic input and output
// This program takes user input and displays it

int main() {
    
    cout << "=== Input and Output Basics ===" << endl;
    cout << endl;
    
    // Taking input from user
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "\nYou entered: " << age << endl;
    
    // Taking multiple inputs
    cout << endl;
    
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Note: cin stops at space
    
    cout << "Hello, " << name << "!" << endl;
    
    // Taking multiple values in one line
    cout << endl;
    
    int num1, num2;
    cout << "Enter two numbers (space-separated): ";
    cin >> num1 >> num2;
    
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << (num1 + num2) << endl;
    
    return 0;
}
