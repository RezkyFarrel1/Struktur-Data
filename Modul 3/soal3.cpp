#include <iostream>

using namespace std;

// Fungsi/prosedur untuk menampilkan isi sebuah array integer 2D
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi/prosedur untuk menukarkan isi dari 2 array integer 2D pada posisi tertentu
void tukarIsiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi/prosedur untuk menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer
void tukarIsiPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // 1. Membuat 2 buah array 2D integer berukuran 3x3
    int arrayA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int arrayB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Membuat 2 buah pointer integer beserta variabel yang ditunjuk
    int var1 = 100;
    int var2 = 200;
    int *pointer1 = &var1;
    int *pointer2 = &var2;

    // --- Demonstrasi Program ---

    cout << "=== Menampilkan Array Awal ===" << endl;
    cout << "Array A:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B:" << endl;
    tampilkanArray(arrayB);

    cout << "\n=== Menukar Isi Array (Posisi baris 1, kolom 1) ===" << endl;
    // Ingat bahwa indeks array dimulai dari 0. Posisi [1][1] adalah elemen tengah.
    tukarIsiArray(arrayA, arrayB, 1, 1);
    
    cout << "Array A setelah ditukar:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B setelah ditukar:" << endl;
    tampilkanArray(arrayB);

    cout << "\n=== Menukar Isi Variabel via Pointer ===" << endl;
    cout << "Sebelum ditukar: var1 = " << *pointer1 << ", var2 = " << *pointer2 << endl;
    
    tukarIsiPointer(pointer1, pointer2);
    
    cout << "Setelah ditukar: var1 = " << *pointer1 << ", var2 = " << *pointer2 << endl;

    return 0;
}