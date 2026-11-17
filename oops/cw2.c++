
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // 1. Right Angle Triangle
    cout << "Right Angle Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Inverted Right Angle Triangle
    cout << "\nInverted Right Angle Triangle\n";

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 3. Full Pyramid
    cout << "\nFull Pyramid\n";

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
