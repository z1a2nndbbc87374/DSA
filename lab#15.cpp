#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* top=0;
//push the data in the stack
void push(int x){
	Node* newnode;
	newnode=new Node;
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
//Pop from the stack
void pop(){
	Node* temp;
	temp=top;
	if(top==0){
		cout<<"stack is empty\n";
	}
	else{
		cout<<"The poped element is"<<top->data<<endl;
		top=top->next;
		delete temp;
	}
}
//Display the stack
void display(){
	
	if(top==0){
		cout<<"Stack is empty\n";
	}
	else{
		Node* temp;
	    temp=top;
		while(temp!=0){
			cout<<temp->data;
			temp=temp->next;
		}
	}
}
int main(){
	int choice,element;
	do{cout << "Choose an option:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cin >> choice;
	
	switch(choice){
		case 1:
			cout<<"Enter the element you want to push\n";
			cin>>element;
			push(element);
			break;
		case 2:
			pop();
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

	}}while(choice!=4);
return 0;
}