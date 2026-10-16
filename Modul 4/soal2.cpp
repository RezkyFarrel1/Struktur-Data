#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertLast(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAfter(Node* head, int searchData, int newData) {
    Node* current = head;
    
    while (current != nullptr) {
        if (current->data == searchData) {
        
            Node* newNode = new Node();
            newNode->data = newData;
            
            newNode->next = current->next;
            current->next = newNode;
            
            return;
        }
        current = current->next;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertLast(head, tail, val);
    }

    int searchData, newData;
    
    cin >> searchData;
    
    cin >> newData;

    insertAfter(head, searchData, newData);

    printList(head);

    return 0;
}