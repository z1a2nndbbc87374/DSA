//Array-based Implementation of Drifting Queue 
#include<iostream>
#define N 5
using namespace std;

int Queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        cout << "Queue is full\n";
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        Queue[rear] = x;
    }
    else {
        rear++;
        Queue[rear] = x;
    }

    // Display the queue after enqueue
    cout << "Queue elements after enqueue: ";
    for (int i = front; i <= rear; i++) {
        cout << Queue[i] << " ";
    }
    cout << endl;
}

void dequeue(int y) {
    if (front==-1&&rear==-1){
    	cout<<"Queue is empty\n";
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		front++;
	}
	// Display the queue after dequeue
    cout << "Queue elements after dequeue: ";
    for (int i = front; i <= rear; i++) {
        cout << Queue[i] << " ";
    }
    cout << endl;

	
}

int main() {
    int choice, element;
    do {
        cout << "Choose an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                enqueue(element);
                break;
            case 2:
                cout << "Enter element to dequeue: ";
                cin >> element;
                dequeue(element);
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
                break;
        }
    } while (choice != 3);
    return 0;
}
