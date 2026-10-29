#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>

using namespace std;

// Definisi tipe data infotype sesuai soal
struct infotype {
    string nopol;
    string warna;
    int thnBuat;
};

// Definisi pointer address
typedef struct ElmList *address;

// Definisi elemen list (node)
struct ElmList {
    infotype info;
    address next;
    address prev;
};

// Definisi List
struct List {
    address First;
    address Last;
};

// --- Fungsi dan Prosedur Soal 1 ---
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertLast(List &L, address P);
void insertFirst(List &L, address P); // Ditambahkan agar urutan print sesuai contoh output

// --- Fungsi Soal 2 ---
address findElm(List L, infotype x);

// --- Prosedur Soal 3 ---
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

// Prosedur tambahan untuk mempermudah penghapusan berdasarkan Nomor Polisi di main.cpp
void hapusDataNopol(List &L, string nopolTarget);

#endif