#include "pelajaran.h"

// Implementasi fungsi create_pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pelBaru;
    pelBaru.namaMapel = namapel;
    pelBaru.kodeMapel = kodepel;
    
    return pelBaru;
}

// Implementasi prosedur tampil_pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    // Pada gambar contoh output, label yang dicetak adalah "nilai :" untuk kode pelajaran
    cout << "nilai : " << pel.kodeMapel << endl; 
}