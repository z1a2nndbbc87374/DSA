#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, i, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key number: ";
    cin >> key;
    int index = linearsearch(arr, n, key);
    if(index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array\n";
    }
    return 0;
}
