#include <iostream>
using namespace std;

int main() {
    int rpm;

    cout << "Masukkan kecepatan mesin (RPM): ";
    cin >> rpm;

    try {
        if (rpm > 5000) {
            throw 500;
        }

        cout << "Kecepatan mesin normal." << endl;
    }
    catch (int error) {
        cout << "Overload Error " << error << endl;
    }

    return 0;
}
