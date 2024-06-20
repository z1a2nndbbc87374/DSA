//Implementing Pointers in C++
#include<iostream>
using namespace std;

int main(){
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Display addresses and values of x and y\n";
        cout << "2. Display updated value of x\n";
        cout << "3. Swap x and y\n";
        cout << "4. Exit\n";
        cin >> choice;
        
        switch(choice){
            case 1: {
                int x=10, y=2;
                int *ptr1 = &x, *ptr2 = &y;
                cout << "The address of x is " << ptr1 << endl;
                cout << "The value of x is " << *ptr1 << endl;
                cout << "The address of y is " << ptr2 << endl;
                cout << "The value of y is " << *ptr2 << endl;
                break;
            }
            case 2: {
                int x=10;
                int *ptr1 = &x;
                cout << "The updated value of x is " << *ptr1 << endl;
                break;
            }
            case 3: {
                int x=5, y=3;
                int *p1=&x, *p2=&y;
                int temp=*p1;
                *p1=*p2;
                *p2=temp;
                cout << "After swapping: " << x << " " << y << endl;
                break;
            }
            case 4: {
                cout << "Exiting program.\n";
                break;
            }
            default:
                cout << "Invalid choice. Please choose again.\n";
        }
    } while(choice != 4);
    return 0;
}
