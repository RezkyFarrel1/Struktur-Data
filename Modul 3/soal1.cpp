#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struktur data untuk mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

// Fungsi untuk menghitung nilai akhir sesuai dengan rumus yang diberikan
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    // Array dengan batas maksimal 10 mahasiswa
    Mahasiswa mhs[10];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa yang ingin didata (Maks 10): ";
    cin >> jumlah;

    // Validasi agar tidak melebihi kapasitas array
    if (jumlah > 10) {
        cout << "Jumlah melebihi batas. Program akan memproses 10 mahasiswa pertama saja.\n";
        jumlah = 10;
    }

    // Proses Input Data Mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\n=== Data Mahasiswa ke-" << i + 1 << " ===" << endl;
        cin.ignore(); // Membersihkan buffer input sebelum getline
        
        cout << "Nama        : ";
        getline(cin, mhs[i].nama);
        
        cout << "NIM         : ";
        getline(cin, mhs[i].nim);
        
        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;
        
        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;
        
        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;

        // Memanggil fungsi untuk menghitung nilai akhir
        mhs[i].nilai_akhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    // Proses Output / Menampilkan Data
    cout << "\n===========================================================\n";
    cout << "                 REKAP NILAI AKHIR MAHASISWA               \n";
    cout << "===========================================================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". Nama        : " << mhs[i].nama << endl;
        cout << "   NIM         : " << mhs[i].nim << endl;
        cout << "   UTS         : " << mhs[i].uts << endl;
        cout << "   UAS         : " << mhs[i].uas << endl;
        cout << "   Tugas       : " << mhs[i].tugas << endl;
        cout << "   Nilai Akhir : " << mhs[i].nilai_akhir << endl;
        cout << "-----------------------------------------------------------\n";
    }

    return 0;
}