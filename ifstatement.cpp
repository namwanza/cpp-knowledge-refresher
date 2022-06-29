#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Please enter your age !" << endl;
    cin >> age;
    if(age < 18) {
        cout << "You're too young to date" << endl;
    } else if(age >= 18 && age <= 24) {
        cout << "You can be in a relationship !" << endl;
    } else {
        cout << "You can marry now !" << endl;
    }
    return 0;
} // namespace std
