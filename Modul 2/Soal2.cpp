#include <iostream>

using namespace std;

int main() {
    // Deklarasi Array 2 Dimensi berukuran 3x3
    int matriks[3][3];
    int jumlah_diagonal = 0;

    // Menerima input 9 bilangan bulat untuk mengisi elemen matriks
    // (Bisa dimasukkan dalam 1 baris sekaligus atau 3 baris)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
        }
    }

    // Menjumlahkan elemen pada diagonal utama (dari kiri atas ke kanan bawah)
    // Pada diagonal utama, indeks baris (i) selalu sama dengan indeks kolom (j)
    for (int i = 0; i < 3; i++) {
        jumlah_diagonal += matriks[i][i];
    }

    // Menampilkan hasil penjumlahan
    cout << jumlah_diagonal << "\n";

    return 0;
}