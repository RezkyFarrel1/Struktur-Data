#include <iostream>
using namespace std;

// ini adalah FUNGSI (punya return value)
int maks3(int a, int b, int c) {
    int temp_max = a;
    if (b > temp_max) {
        temp_max = b;
}
    if (c > temp_max) {
        temp_max = c;
    }
    return temp_max;
}

//i\ ini adalah PROSEDUR (tidak punya return value)
void tulis(int x) {
    for (int i = 0 ; i < x ; i++) {
        cout << "Baris ke-" << i+1 << endl;
    }
}

int main() {
    // mangil fugsi, nilainya bisa disimpan ke variabel
    int hasil_maks = maks3(10,50,30) ;
    cout << "Nilai maksimumnya adalah = " << hasil_maks << endl;

    // Manggil prosedur, dia langsung jalanin tugasnya aja
    cout << "Mulai panggil prosedur: " << endl;
    tulis(3);

    return 0;
}