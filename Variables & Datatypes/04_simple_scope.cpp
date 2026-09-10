#include <iostream>
using namespace std;

int main() {

    int age = 8;
    cout << age << endl;

    {
    int age = 7;
    cout << age << endl;
    }
    
    return 0;
    
}
