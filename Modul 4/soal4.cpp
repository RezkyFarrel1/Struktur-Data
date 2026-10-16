#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Node {
    string judul;
    int tahun;
    Node* next;
};

class DaftarBuku {
private:
    Node* head;
    Node* tail;

public:
    DaftarBuku() : head(nullptr), tail(nullptr) {}

    ~DaftarBuku() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Menambah buku di urutan terakhir
    void insertLast(const string& judul, int tahun) {
        Node* baru = new Node{judul, tahun, nullptr};
        if (head == nullptr) {
            head = tail = baru;
        } else {
            tail->next = baru;
            tail = baru;
        }
    }

    // Menghapus buku di urutan terakhir
    void deleteLast() {
        if (head == nullptr) {
            return; // list kosong
        }
        if (head == tail) { // hanya satu data
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* bantu = head;
        while (bantu->next != tail) {
            bantu = bantu->next;
        }
        delete tail;
        tail = bantu;
        tail->next = nullptr;
    }

    // Menampilkan seluruh buku
    void tampilkan() const {
        cout << "Daftar Buku:" << endl;
        Node* bantu = head;
        while (bantu != nullptr) {
            cout << bantu->judul << " (" << bantu->tahun << ")" << endl;
            bantu = bantu->next;
        }
    }
};

int main() {
    DaftarBuku list;
    string baris;

    while (getline(cin, baris)) {
        if (baris.empty()) continue;

        // Jika baris hanya berisi angka (nilai N), lewati
        bool hanyaAngka = true;
        for (char c : baris) {
            if (!isdigit(c)) { hanyaAngka = false; break; }
        }
        if (hanyaAngka) continue;

        // Token terakhir = tahun, sisanya = judul
        size_t pos = baris.find_last_of(' ');
        if (pos == string::npos) continue;

        string judul = baris.substr(0, pos);
        int tahun = stoi(baris.substr(pos + 1));
        list.insertLast(judul, tahun);
    }

    list.deleteLast(); // satu kali operasi penghapusan data terakhir
    list.tampilkan();

    return 0;
}