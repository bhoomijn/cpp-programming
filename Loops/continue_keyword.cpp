
// continue keyword demo
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // skips printing when i = 5
        }
        cout << i << endl;
    }
    return 0;
}
