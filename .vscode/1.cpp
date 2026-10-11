#include <iostream>

using namespace std;

int main() {
    long long x;
    if (cin >> x) {
        if (x % 400 == 0) {
            cout << "Leap Year\n";
        }
        else if (x % 100 == 0) {
            cout << "Not a Leap Year\n";
        }
        else if (x % 4 == 0) {
            cout << "Leap Year\n";
        }
        else {
            cout << "Not a Leap Year\n";
        }
    }
    return 0;
}