#include <iostream>
#include <bitset>
using namespace std;

void printBinary(int value) {
    cout << bitset<8>(value) << endl;
}

void demonstrateBasics() {
    int a = 12;  // 00001100
    int b = 5;   // 00000101

    cout << "=== Bitwise Basics ===\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n\n";

    cout << "a & b = " << (a & b) << "\n";   // 4
    cout << "a | b = " << (a | b) << "\n";   // 13
    cout << "a ^ b = " << (a ^ b) << "\n";   // 9
    cout << "~a = " << (~a) << "\n";          // bitwise NOT
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n\n";

    cout << "Binary representation of a: ";
    printBinary(a);
    cout << "Binary representation of b: ";
    printBinary(b);
}

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

void demonstrateCounting() {
    int value = 29; // 11101
    cout << "\n=== Counting Set Bits ===\n";
    cout << value << " has " << countSetBits(value) << " set bits.\n";
}
