#include <iostream>
#include <string>

using namespace std;

// Fungsi yang mengembalikan nilai (integer) untuk menghitung jumlah karakter
int hitungKemunculan(string kata, char target) {
    int jumlah = 0;
    
    // Melakukan perulangan untuk mengecek setiap karakter dalam string
    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == target) {
            jumlah++;
        }
    }
    
    return jumlah;
}

int main() {
    string kata;
    char karakter_dicari;

    // Menerima input baris pertama berupa kata (string tanpa spasi)
    cin >> kata;
    
    // Menerima input baris kedua berupa karakter yang dicari
    cin >> karakter_dicari;

    // Memanggil fungsi dan menampilkan hasil kembaliannya
    int hasil = hitungKemunculan(kata, karakter_dicari);
    cout << hasil << "\n";

    return 0;
}