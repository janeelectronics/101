#include <iostream>
using namespace std;

int main() {
    cout << "Loops test:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }

    cout << "\nEnter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "! Your setup works great." << endl;

    return 0;
}