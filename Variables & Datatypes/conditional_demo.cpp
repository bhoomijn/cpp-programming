
// marks_grading.cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks" << endl;
    cin >> marks;

    if (marks >= 90) {
        cout << "A" << endl;
    } else if (marks >= 80) {
        cout << "B" << endl;
    } else if (marks >= 70) {
        cout << "C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
