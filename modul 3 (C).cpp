#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur anda: ";
    cin >> umur;

    try {
        if (umur < 17) {
            throw 404;
        }

        cout << "Proses pembuatan SIM dilanjutkan" << endl;
    }
    catch (int error) {
        cout << "Gagal: " << error << endl;
    }

    return 0;
}
