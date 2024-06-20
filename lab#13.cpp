#include <iostream>
using namespace std;


struct Node {
    int data;
    Node *next;
};

Node* head = NULL;
int count=0;

//Insert the value in linked list at first
void insertfirst(int newdata) {
    Node* newnode = new Node;
    newnode->data = newdata;
    newnode->next = head;
    head = newnode;
    count++;
}
//Insert the value in linked list at the end
void insertend(int lastdata){
	Node *newnode,*temp;
	newnode=new Node;
	newnode->data=lastdata;
	newnode->next=0;
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	count++;
}
//Insert the data in linked list at the center
void insertcenter(int centerdata){
	Node *newnode,*temp;
	newnode=new Node;
	int pos,i=1;
	cout<<"Enter the position after you want to insert the data\n";
	cin>>pos;
	if(pos>count){
		cout<<"Invalid position";
	}
	else{
		temp=head;
		while(i<pos){
			temp=temp->next;
			i++;
		}
		newnode->data=centerdata;
		newnode->next=temp->next;
		temp->next=newnode;
	}
	count++;
}
//Delete from the first
void deletebeg(){
	if(head==0){
		cout<<"Linked list is empty\n";
	}
	else{
	
	Node* temp;
	temp=head;
	head=head->next;
	delete temp;
	count --;}
} 
//Delete from the end
void deleteend(){
	Node *temp,*prevnode;
	temp=head;
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=0;
	}
	else{
		prevnode->next=0;
	}
	delete temp;
	count --;
}
//Delete from the specified position
void deletecenter(){
	Node *temp,*nextnode;
	int pos,i=1;
	temp=head;
	cout<<"Enter the position do you want to delete\n";
	cin>>pos;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	delete nextnode;
	count --;
}
//Display the linked list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Insertfirst\n";
        cout << "2. Insertend\n";
        cout << "3. Insertcenter\n";
        cout << "4. DeleteBeg\n";
        cout << "5. DeleteEnd\n";
        cout << "6. DeleteCenter\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: 
                int newdata;
                cout << "Enter data: ";
                cin >> newdata;
                insertfirst(newdata);
                break;
            case 2: 
                int lastdata;
                cout << "Enter data: ";
                cin >> lastdata;
                insertend(lastdata);
                break;
            case 3: 
                int centerdata;
                cout << "Enter data: ";
                cin >> centerdata;
                insertcenter(centerdata);
                break;
            case 4:
                deletebeg();
                cout << endl;
                break;
            case 5:
                deleteend();
                cout << endl;
                break;
            case 6:
                deletecenter();
                cout << endl;
                break;
            case 7:
                display();
                cout << endl;
                break;
            case 8:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
                break;
        }
    } while (choice !=8);
   
    return 0;
}
