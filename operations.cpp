#include <iostream>
using namespace std;

int main() {
    // Multiplication and Divison have the same precendence 
    // but the operations is done from the left to right 
    // Addition is evaluated next
    // Then, subtraction
    cout << "The answer is : " << 20 + 30 * 2 / 10 - 3 << endl;
    return 0;
}