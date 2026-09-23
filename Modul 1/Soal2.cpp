#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka (0 - 100): ";
    cin >> n;

    string s[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

    cout << n << " : ";
    if (n >= 0 && n <= 11) cout << s[n];
    else if (n < 20) cout << s[n % 10] << " belas";
    else if (n < 100) cout << s[n / 10] << " puluh" << (n % 10 ? " " + s[n % 10] : "");
    else if (n == 100) cout << "seratus";
    else cout << "Di luar batas";
    
    cout << endl;
    return 0;
}