//Array-based Implementation of List ADT 
#include<iostream>
using namespace std;

void Create(){
	int i,size;
	cout<<"creating a array list\n";
	cout<<"Enter the size of  the list\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements in the list\n";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void Insert() {
    int i, size, num, pos;
    cout << "Insert the value at a particular position in an array list\n";
    cout << "Enter the size of the list\n";
    cin >> size;

    int arr[size];
    cout << "Enter the elements in the list\n";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be inserted\n";
    cin >> num;
    cout << "Enter the position where to insert\n";
    cin >> pos;

    if (pos > size + 1 || pos < 1) {
        cout << "Invalid position. Position should be between 1 and " << size + 1 << ".\n";
    } else {
        for (i = size - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        // Value inserted at the index
        arr[pos - 1] = num;
        size++;

        // Display updated numbers
        cout << "List after insertion:\n";
        for (i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void Delete() {
    int i, size, pos;
    cout << "Delete the element at a particular position in an array list\n";
    cout << "Enter the size of the list\n";
    cin >> size;

    if (size == 0) {
        cout << "List is empty. Cannot delete any element.\n";
    } else {
        int arr[size];
        cout << "Enter the elements in the list\n";
        for (i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "Enter the position of the element to be deleted\n";
        cin >> pos;

        if (pos < 1 || pos > size) {
            cout << "Invalid position. Position should be between 1 and " << size << ".\n";
        } else {
            // Shift elements to the left starting from the position to be deleted
            for (i = pos - 1; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;

            // Display updated numbers
            cout << "List after deletion:\n";
            for (i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}


int main(){
	int choice;
	do {
        cout << "Choose an option:\n";
        cout << "1. Create\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                Create();
                break;
            case 2:
                Insert();
                break;
            case 3:
                Delete();
                break;    
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
        }
    } while (choice != 4);

    return 0;
}

