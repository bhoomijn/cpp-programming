
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // Relational operator demo
    cout << "(10 != 6) = " << (10 != 6) << endl; // 1 (true)

    // Logical operator demo
    bool cond1 = (5 > 3);   // true
    bool cond2 = true;
    bool cond3 = true;
    bool cond4 = false;

    if (cond1 && cond2 && cond3) {
        cout << "All conditions true" << endl;   // instead of "pop"
    } else {
        cout << "At least one false" << endl;    // instead of "popp"
    }

    return 0;
}
