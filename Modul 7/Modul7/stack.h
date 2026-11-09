#ifndef STACK_H
#define STACK_H

#include <iostream>

// Mendefinisikan tipe data infotype
typedef int infotype;

// Definisi ADT Stack menggunakan array
struct Stack {
    infotype info[20];
    int top;
};

// --- Latihan 1: Prosedur & Fungsi Dasar ---
void CreateStack(Stack &S);
void Push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S); // Menggunakan pass by value agar tidak merubah stack asli
void balikStack(Stack &S);

// --- Latihan 2: pushAscending ---
void pushAscending(Stack &S, infotype x);

// --- Latihan 3: getInputStream ---
void getInputStream(Stack &S);

#endif