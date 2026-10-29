#include "Doublylist.h"

int main() {
    List L;
    CreateList(L);
    infotype dataKendaraan;
    address P;
    string inputNopol;
    
    // --- MENGINPUT DATA (Sesuai Gambar 6-23) ---
    for (int i = 0; i < 4; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> dataKendaraan.nopol;
        
        // Cek duplikasi nomor polisi
        infotype searchKey;
        searchKey.nopol = dataKendaraan.nopol;
        if (findElm(L, searchKey) != NULL) {
            cout << "nomor polisi sudah terdaftar\n\n";
            continue; // Lanjut ke iterasi berikutnya tanpa input warna & tahun
        }
        
        cout << "masukkan warna kendaraan: ";
        cin >> dataKendaraan.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> dataKendaraan.thnBuat;
        cout << endl;
        
        // Alokasi dan masukkan data (menggunakan insertFirst agar output terbaru di atas)
        P = alokasi(dataKendaraan);
        insertFirst(L, P); 
    }
    
    // Tampilkan List
    printInfo(L);
    
    
    // --- SOAL 2: MENCARI ELEMEN D001 (Sesuai Gambar 6-24) ---
    cout << "------------------------------------------\n";
    cout << "Masukkan Nomor Polisi yang dicari : D001\n\n";
    infotype cari;
    cari.nopol = "D001";
    address hasilCari = findElm(L, cari);
    
    if (hasilCari != NULL) {
        cout << "Nomor Polisi\t: " << hasilCari->info.nopol << endl;
        cout << "Warna\t\t: " << hasilCari->info.warna << endl;
        cout << "Tahun\t\t: " << hasilCari->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    cout << endl;
    
    
    // --- SOAL 3: MENGHAPUS ELEMEN D003 (Sesuai Gambar 6-25) ---
    cout << "------------------------------------------\n";
    cout << "Masukkan Nomor Polisi yang akan dihapus : D003\n";
    hapusDataNopol(L, "D003");
    
    // Tampilkan List setelah penghapusan
    printInfo(L);

    return 0;
}