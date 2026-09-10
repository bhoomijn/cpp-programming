#include <iostream>
using namespace std;

// Program demonstrating do-while loops

int main() {
    
    cout << "=== Do-While Loop ===" << endl;
    cout << endl;
    
    // Simple do-while loop
    cout << "Counting from 1 to 5 using do-while:" << endl;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl << endl;
    
    // Menu system
    int choice;
    int sum = 0;
    
    cout << "=== Simple Calculator ===" << endl;
    
    do {
        cout << "\n1. Add a number" << endl;
        cout << "2. Show sum" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            sum += num;
            cout << "Number added! Current sum: " << sum << endl;
        } else if (choice == 2) {
            cout << "Sum = " << sum << endl;
        } else if (choice == 3) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
    
    return 0;
}
