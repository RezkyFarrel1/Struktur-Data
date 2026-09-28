#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    // Menerima input bilangan bulat positif N (banyaknya data mahasiswa)
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nilai(n);
    long long total = 0;

    // Menerima N buah bilangan bulat dan menjumlahkannya
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    // Menghitung rata-rata
    // Pembagian integer di C++ otomatis membulatkan ke bawah
    int rata_rata = total / n;

    // Menghitung jumlah mahasiswa yang nilainya lebih dari rata-rata
    int jumlah_di_atas_rata = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata_rata) {
            jumlah_di_atas_rata++;
        }
    }

    // Menampilkan keluaran
    cout << "Rata-rata: " << rata_rata << "\n";
    cout << "Di atas rata-rata: " << jumlah_di_atas_rata << "\n";

    return 0;
}