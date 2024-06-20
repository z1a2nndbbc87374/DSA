//Array Bounds (Overflow/ Underflow) Checking 
#include <iostream>
using namespace std;

void overflow() {
    int arr[5];
    cout << "Enter the values of the array\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "The values are\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

void underflow() {
    int arr[5];
    cout << "Enter the values of the array\n";
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    cout << "The values are\n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Overflow\n";
        cout << "2. Underflow\n";
        cout << "3. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                overflow();
                break;
            case 2:
                underflow();
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
        }
    } while (choice != 3);

    return 0;
}
