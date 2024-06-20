#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    node *head = nullptr;
    node *newnode;

    // Create first node
    newnode = new node;
    cout << "Enter data for first node: ";
    cin >> newnode->data;
    newnode->next = nullptr;
    head = newnode;

    // Create second node
    newnode = new node;
    cout << "Enter data for second node: ";
    cin >> newnode->data;
    newnode->next = nullptr;
    head->next = newnode;

    // Print the linked list
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }


    return 0;
}
