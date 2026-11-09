#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    // ==========================================
    // BAGIAN 1: Test Output Stack Dasar
    // ==========================================
    cout << "--- TEST LATIHAN 1 ---" << endl;
    cout << "Hello world!" << endl;
    Stack S1;
    CreateStack(S1);
    Push(S1, 3);
    Push(S1, 4);
    Push(S1, 8);
    pop(S1);
    Push(S1, 2);
    Push(S1, 3);
    pop(S1);
    Push(S1, 9);
    printInfo(S1);
    cout << "balik stack" << endl;
    balikStack(S1);
    printInfo(S1);
    cout << "\n\n";

    // ==========================================
    // BAGIAN 2: Test Output pushAscending
    // ==========================================
    cout << "--- TEST LATIHAN 2 ---" << endl;
    cout << "Hello world!" << endl;
    Stack S2;
    CreateStack(S2);
    pushAscending(S2, 3);
    pushAscending(S2, 4);
    pushAscending(S2, 8);
    pushAscending(S2, 2);
    pushAscending(S2, 3);
    pushAscending(S2, 9);
    printInfo(S2);
    cout << "balik stack" << endl;
    balikStack(S2);
    printInfo(S2);
    cout << "\n\n";

    // ==========================================
    // BAGIAN 3: Test Output getInputStream
    // ==========================================
    cout << "--- TEST LATIHAN 3 ---" << endl;
    cout << "Hello world!" << endl;
    Stack S3;
    CreateStack(S3);
    
    // Program akan menunggu input ketikan angka beruntun dari user (Contoh: 4729601) 
    // lalu tekan Enter
    getInputStream(S3); 
    
    printInfo(S3);
    cout << "balik stack" << endl;
    balikStack(S3);
    printInfo(S3);

    return 0;
}