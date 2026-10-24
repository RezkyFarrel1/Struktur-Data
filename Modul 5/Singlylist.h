#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#include <iostream>

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Prototipe fungsi dasar
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Prototipe fungsi tambahan untuk pencarian dan penjumlahan
address findElm(List L, infotype x);
int sumInfo(List L);

#endif