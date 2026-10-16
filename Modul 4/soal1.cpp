#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    Node* next;
};

void insertLast(Node*& head, Node*& tail, string nama) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->next = nullptr;

    if (head == nullptr) {
    
        head = tail = newNode;
    } else {
        
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteFirst(Node*& head, Node*& tail) {
    if (head == nullptr) {
        cout << "Antrean kosong." << endl;
        return;
    }

    Node* temp = head;
    cout << "Melayani: " << temp->nama << endl;
    
    head = head->next;
    
    if (head == nullptr) {
        tail = nullptr;
    }
    
    delete temp;
}

void printQueue(Node* head) {
    if (head == nullptr) {
        cout << "Antrean kosong." << endl;
        return;
    }

    cout << "Antrean: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->nama;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int pilihan;
    string nama;

    while (true) {
        cin >> pilihan;

        if (pilihan == 1) {
            cin >> nama;
            insertLast(head, tail, nama);
            printQueue(head);
        } else if (pilihan == 2) {
            deleteFirst(head, tail);
        
            if (head != nullptr) {
                printQueue(head);
            }
        } else if (pilihan == 3) {
            break;
        }
    }

    return 0;
}