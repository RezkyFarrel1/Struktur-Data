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

int calculateSum(Node* head) {
    int sum = 0;
    Node* current = head;
    
    while (current != nullptr) {
        sum += current->data;
        current = current->next; 
    }
    
    return sum;
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

    cout << calculateSum(head) << endl;

    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}