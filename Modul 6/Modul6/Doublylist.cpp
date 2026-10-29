#include "Doublylist.h"

// Membuat list kosong
void CreateList(List &L) {
    L.First = NULL;
    L.Last = NULL;
}

// Alokasi memori untuk elemen baru
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

// Dealokasi memori
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Menyisipkan elemen di akhir list
void insertLast(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        L.Last = P;
    } else {
        L.Last->next = P;
        P->prev = L.Last;
        L.Last = P;
    }
}

// Menyisipkan elemen di awal list (agar output LIFO sesuai contoh gambar)
void insertFirst(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        L.Last = P;
    } else {
        P->next = L.First;
        L.First->prev = P;
        L.First = P;
    }
}

// Mencetak seluruh isi list
void printInfo(List L) {
    address P = L.First;
    cout << "\nDATA LIST 1\n\n";
    while (P != NULL) {
        cout << "no polisi : " << P->info.nopol << endl;
        cout << "warna     : " << P->info.warna << endl;
        cout << "tahun     : " << P->info.thnBuat << endl;
        cout << endl;
        P = P->next;
    }
}

// Mencari elemen berdasarkan nomor polisi
address findElm(List L, infotype x) {
    address P = L.First;
    while (P != NULL) {
        if (P->info.nopol == x.nopol) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

// Menghapus elemen pertama
void deleteFirst(List &L, address &P) {
    if (L.First != NULL) {
        P = L.First;
        if (L.First == L.Last) { // Jika hanya 1 elemen
            L.First = NULL;
            L.Last = NULL;
        } else {
            L.First = P->next;
            L.First->prev = NULL;
            P->next = NULL;
        }
    }
}

// Menghapus elemen terakhir
void deleteLast(List &L, address &P) {
    if (L.First != NULL) {
        P = L.Last;
        if (L.First == L.Last) { // Jika hanya 1 elemen
            L.First = NULL;
            L.Last = NULL;
        } else {
            L.Last = P->prev;
            L.Last->next = NULL;
            P->prev = NULL;
        }
    }
}

// Menghapus elemen setelah elemen tertentu (Prec)
void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != NULL) { // Jika P bukan elemen terakhir
            P->next->prev = Prec;
        }
        P->next = NULL;
        P->prev = NULL;
    }
}

// Logika pembantu untuk menghapus data berdasarkan nopol (Soal 3)
void hapusDataNopol(List &L, string nopolTarget) {
    infotype x;
    x.nopol = nopolTarget;
    address P = findElm(L, x);
    
    if (P != NULL) {
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            address Prec = P->prev;
            deleteAfter(Prec, P);
        }
        dealokasi(P);
        cout << "Data dengan nomor polisi " << nopolTarget << " berhasil dihapus.\n";
    } else {
        cout << "Nomor polisi tidak ditemukan.\n";
    }
}