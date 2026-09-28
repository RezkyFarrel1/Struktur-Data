#include <iostream>

using namespace std;

// Prosedur (void function) dengan parameter Pass by Reference
void tukarDanKali(int &a, int &b) {
    // Menukar (swap) nilai dari dua bilangan tanpa fungsi bawaan
    int temp = a;
    a = b;
    b = temp;
    
    // Mengalikan masing-masing bilangan yang sudah ditukar dengan 10
    a = a * 10;
    b = b * 10;
}

int main() {
    int x, y;
    
    // Program utama hanya menerima input
    cin >> x >> y;
    
    // Memanggil prosedur
    tukarDanKali(x, y);
    
    // Program utama mencetak hasil akhir
    cout << "x = " << x << ", y = " << y << "\n";
    
    return 0;
}