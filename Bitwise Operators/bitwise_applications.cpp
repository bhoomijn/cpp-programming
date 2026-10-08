#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int findMissingNumber(int arr[], int n) {
    int expectedXor = 0;
    for (int i = 0; i <= n; i++) {
        expectedXor ^= i;
    }

    int actualXor = 0;
    for (int i = 0; i < n; i++) {
        actualXor ^= arr[i];
    }

    return expectedXor ^ actualXor;
}

int findUniqueNumber(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int rotateLeft(int value, int positions) {
    return (value << positions) | (value >> (32 - positions));
}

void demonstrateApplications() {
    int numbers[] = {1, 2, 4, 5, 6};
    int size = 5;

    int repeated[] = {2, 2, 1, 1, 4, 5, 5, 6, 6, 3, 3, 7, 7, 9, 9, 8, 8};
    int repeatedSize = 17;

    cout << "\n=== Bitwise Applications ===\n";
    cout << "Is 16 a power of two? " << isPowerOfTwo(16) << "\n";
    cout << "Is 18 a power of two? " << isPowerOfTwo(18) << "\n";
    cout << "Missing number is: " << findMissingNumber(numbers, size) << "\n";
    cout << "Unique number is: " << findUniqueNumber(repeated, repeatedSize) << "\n";
    cout << "Rotate left 13 by 2: " << rotateLeft(13, 2) << "\n";
}
