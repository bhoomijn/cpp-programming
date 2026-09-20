#include <iostream>
using namespace std;

int main() {
    int a = 5;

    cout << "Initial a = " << a << endl;

    cout << "a++ (post-increment): " << a++ << endl; // prints 5, then a=6
    cout << "++a (pre-increment): " << ++a << endl; // a=7, prints 7
    cout << "a-- (post-decrement): " << a-- << endl; // prints 7, then a=6
    cout << "--a (pre-decrement): " << --a << endl; // a=5, prints 5

    return 0;
}
