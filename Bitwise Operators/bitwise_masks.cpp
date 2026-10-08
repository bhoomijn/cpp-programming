#include <iostream>
using namespace std;

bool isBitSet(int n, int position) {
    return (n & (1 << position)) != 0;
}

int setBit(int n, int position) {
    return n | (1 << position);
}

int clearBit(int n, int position) {
    return n & ~(1 << position);
}

int toggleBit(int n, int position) {
    return n ^ (1 << position);
}

int updateBit(int n, int position, bool value) {
    if (value) {
        return setBit(n, position);
    }
    return clearBit(n, position);
}

int extractLowestSetBit(int n) {
    return n & -n;
}

void demonstrateMasks() {
    int value = 13; // 1101
    int position = 2;

    cout << "\n=== Bit Masking ===\n";
    cout << "Original value: " << value << "\n";
    cout << "Bit at position " << position << " is set? " << isBitSet(value, position) << "\n";
    cout << "Set bit at position " << position << ": " << setBit(value, position) << "\n";
    cout << "Clear bit at position " << position << ": " << clearBit(value, position) << "\n";
    cout << "Toggle bit at position " << position << ": " << toggleBit(value, position) << "\n";
    cout << "Update bit at position " << position << " to 0: " << updateBit(value, position, false) << "\n";
    cout << "Lowest set bit value: " << extractLowestSetBit(value) << "\n";
}
