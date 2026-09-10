#include <iostream>
using namespace std;

// Program demonstrating while loops

int main() {
    
    cout << "=== While Loop ===" << endl;
    cout << endl;
    
    // Simple while loop
    cout << "Counting from 1 to 5 using while loop:" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl << endl;
    
    // User input until specific value
    int num = 0;
    int sum = 0;
    cout << "Enter numbers (0 to stop):" << endl;
    
    while (num != 0 || sum == 0) {  // First iteration always happens
        cout << "Enter a number: ";
        cin >> num;
        if (num != 0) {
            sum += num;
        }
    }
    cout << "Sum of all numbers: " << sum << endl << endl;
    
    // Factorial calculation
    int n;
    cout << "Enter a number to find factorial: ";
    cin >> n;
    
    int factorial = 1;
    int count = 1;
    
    while (count <= n) {
        factorial *= count;
        count++;
    }
    
    cout << "Factorial of " << n << " is " << factorial << endl;
    
    return 0;
}
