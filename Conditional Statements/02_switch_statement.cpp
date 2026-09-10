#include <iostream>
using namespace std;

// Program demonstrating switch statement

int main() {
    
    cout << "=== Switch Statement ===" << endl;
    cout << endl;
    
    int day;
    cout << "Enter a number (1-7) for day of week: ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number!" << endl;
    }
    
    cout << endl;
    
    // Grading system
    char grade;
    cout << "Enter a grade (A/B/C/D/F): ";
    cin >> grade;
    
    switch (grade) {
        case 'A':
            cout << "Excellent! Score: 90-100" << endl;
            break;
        case 'B':
            cout << "Good! Score: 80-89" << endl;
            break;
        case 'C':
            cout << "Average! Score: 70-79" << endl;
            break;
        case 'D':
            cout << "Below Average! Score: 60-69" << endl;
            break;
        case 'F':
            cout << "Failed! Score: Below 60" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }
    
    return 0;
}
