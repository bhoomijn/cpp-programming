#include <iostream>
#include <string>
using namespace std;

// Program demonstrating getline() for multi-word input
// getline() can read entire lines including spaces

int main() {
    
    cout << "=== Reading Full Lines with getline() ===" << endl;
    cout << endl;
    
    // Using getline() to read entire line including spaces
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    
    cout << "Your name is: " << fullName << endl;
    cout << endl;
    
    // Reading multiple lines
    string address;
    cout << "Enter your address: ";
    getline(cin, address);
    
    cout << "Your address is: " << address << endl;
    cout << endl;
    
    // Demonstrating the difference between cin and getline()
    cout << "Difference between cin >> and getline():" << endl;
    cout << "- cin >> stops at space or newline" << endl;
    cout << "- getline() reads entire line including spaces" << endl;
    
    return 0;
}
