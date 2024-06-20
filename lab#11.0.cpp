//Searching and Replacing a value in a List 
#include<iostream>
using namespace std;

int searchAndReplace(int arr[], int n, int key, int newValue) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            arr[i] = newValue; 
            return i; 
        }
}
return -1;
}

int main() {
    int n, key, newValue;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key number to search: ";
    cin >> key;
    cout << "Enter the new value to replace: ";
    cin >> newValue;
    
    searchAndReplace(arr, n, key, newValue);

    // Display the modified array after searching and replacing
    cout << "Array after searching and replacing:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
