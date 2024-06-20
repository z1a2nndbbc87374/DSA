//Array-based Implementation of Circular Queue 
#include<iostream>
#define N 5
using namespace std;

int Queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if ((rear + 1) % N == front) {
        cout << "Queue is full\n";
    } else {
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % N;
        }
        Queue[rear] = x;
    }
    
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty\n";
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % N;
    }
}
void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            cout << Queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << Queue[rear] << endl; // Display the last element
    }
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

