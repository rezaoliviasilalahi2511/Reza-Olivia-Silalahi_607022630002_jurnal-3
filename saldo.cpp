#include <iostream>
using namespace std;

int main() {
    int saldo = 500000;
    int tarik;

    cout << "Masukkan jumlah tarik tunai: ";
    cin >> tarik;

    try {
        if (tarik > saldo) {
            throw "Saldo Insufficient";
        }

        saldo = saldo - tarik;
        cout << "Sisa saldo: Rp " << saldo << endl;
    }
    catch (const char* error) {
        cout << "Gagal: " << error << endl;
    }

    return 0;
}
