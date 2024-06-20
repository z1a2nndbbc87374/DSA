#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr; // Initialize to nullptr instead of 0
Node* rear = nullptr; // Initialize to nullptr instead of 0

// Enqueue the Elements
void enqueue(int x) {
    Node* newnode = new Node; // Allocate memory for new node
    newnode->data = x;
    newnode->next = nullptr; // Initialize next pointer to nullptr
    if (front == nullptr && rear == nullptr) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

// Dequeue the Elements
void dequeue() {
    if (front == nullptr && rear == nullptr) {
        cout << "Queue is empty\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    delete temp;
}

// Display the queue
void display() {
    if (front == nullptr && rear == nullptr) {
        cout << "Queue is Empty\n";
        return;
    }
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Print newline after displaying the queue
}

int main() {
    int choice, element;
    do {
        cout << "Choose an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
                break;
        }
    } while (choice != 4);
    return 0;
}
