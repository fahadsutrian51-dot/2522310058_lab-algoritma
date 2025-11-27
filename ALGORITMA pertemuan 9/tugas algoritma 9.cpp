#include <iostream>
using namespace std;

int main() {
    char kode;
    int harga = 0, banyakJenis, banyakPotong;
    int totalBayar = 0;

    cout << "Kode\tJenis\tHarga\n";
    cout << "----------------------------\n";
    cout << "D\tDada\tRp 2500\n";
    cout << "P\tPaha\tRp 2000\n";
    cout << "S\tSayap\tRp 1500\n";
    cout << "----------------------------\n\n";

    cout << "Banyak Jenis : ";
    cin >> banyakJenis;
    cout << endl;

    for (int i = 1; i <= banyakJenis; i++) {
        cout << "Banyak Jenis: " << i << endl;
        cout << "Jenis potong (D/P/S): ";
        cin >> kode;

        cout << "Banyak Potong\t: ";
        cin >> banyakPotong;

        if (kode == 'D' || kode == 'd') harga = 2500;
        else if (kode == 'P' || kode == 'p') harga = 2000;
        else if (kode == 'S' || kode == 's') harga = 1500;

        int jumlahHarga = harga * banyakPotong;
        totalBayar += jumlahHarga;

        cout << "Jumlah Harga: Rp " << jumlahHarga << endl << endl;
    }

    cout << "===========================================\n";
    cout << "Jumlah Bayar\t: Rp " << totalBayar << endl;

    int pajak = totalBayar * 10 / 100;
    cout << "Pajak 10%\t: Rp " << pajak << endl;

    int total = totalBayar + pajak;
    cout << "Total Bayar\t: Rp " << total << endl;
    cout << "===========================================\n";

    return 0;
}
