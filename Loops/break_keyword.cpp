
// Demonstration of break keyword
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
        if (i == 5) {
            break;  // exits loop when i = 5
        }
    }
    return 0;
}
