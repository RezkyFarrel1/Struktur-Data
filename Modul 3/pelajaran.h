#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan tipe bentukan pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Deklarasi fungsi dan prosedur
pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif