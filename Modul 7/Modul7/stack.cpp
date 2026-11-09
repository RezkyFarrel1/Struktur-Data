#include "stack.h"
#include <iostream>

using namespace std;

// --- Latihan 1 ---
void CreateStack(Stack &S) {
    S.top = -1; // -1 menandakan stack kosong (index array dimulai dari 0)
}

void Push(Stack &S, infotype x) {
    if (S.top < 19) { // Cek apakah stack belum penuh (max index 19)
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack Overflow (Penuh)!" << endl;
    }
}

infotype pop(Stack &S) {
    if (S.top > -1) { // Cek apakah stack tidak kosong
        infotype temp = S.info[S.top];
        S.top--;
        return temp;
    }
    return -1; // Mengembalikan nilai default jika kosong
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    // Membalikkan stack langsung pada array (in-place)
    int left = 0;
    int right = S.top;
    while (left < right) {
        infotype temp = S.info[left];
        S.info[left] = S.info[right];
        S.info[right] = temp;
        left++;
        right--;
    }
}

// --- Latihan 2 ---
void pushAscending(Stack &S, infotype x) {
    Stack tempStack;
    CreateStack(tempStack);

    // Pindahkan elemen yang lebih besar dari x ke tempStack
    // agar posisi x nantinya berada di urutan yang tepat
    while (S.top > -1 && S.info[S.top] > x) {
        Push(tempStack, pop(S));
    }

    // Masukkan nilai x
    Push(S, x);

    // Kembalikan elemen-elemen dari tempStack ke S
    while (tempStack.top > -1) {
        Push(S, pop(tempStack));
    }
}

// --- Latihan 3 ---
void getInputStream(Stack &S) {
    char c;
    // cin.get(c) membaca karakter satu per satu termasuk spasi/enter
    // Loop akan berhenti ketika user menekan tombol Enter ('\n')
    while (cin.get(c) && c != '\n') {
        // Cek apakah karakter yang diinput adalah angka (0-9)
        if (c >= '0' && c <= '9') {
            // Konversi dari char ke integer (misal: '4' - '0' = 4)
            Push(S, c - '0');
        }
    }
}