#include <iostream>
using namespace std;

// Demonstrating variable scope and re-declaration
// Note: Same variable name can be declared in different scopes
int main() {
    
    int age = 17;
    cout << "First age: " << age << endl;
    
    // New scope with same variable name
    {
        int age = 66;
        cout << "Second age (in block scope): " << age << endl;
    }
    
    cout << "After block: " << age << endl;
    
    return 0;
}
