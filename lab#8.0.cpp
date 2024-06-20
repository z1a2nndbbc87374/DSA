//Array-based Implementation of Stack ADT
#include<iostream>
#define N 5
int stack[N];
int top=-1;
using namespace std;

void push(){
	int num;
	cout<<"Enter the number you want to push in the stack\n";
	cin>>num;
	if(top==N-1){
		cout<<"Stack is full\n";
	}
	else{
		top++;
		stack[top]=num;
		
	}
}
void pop(){
	int item;
	if(top==-1){
		cout<<"The stack is empty\n";
	}
	else{
		item=stack[top];
		top--;
		cout<<"The poped value is = "<<item<<endl;
	}
}

void peek(){
	if(top==-1){
		cout<<"The stack is empty\n";
	}
	else{
		cout<<"The top value is = "<<stack[top]<<endl;
	}

}
void display(){
	int i;
	cout<<"All stack values are"<<endl;
	for(i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
}
int main(){
	int choice;
	do{cout << "Choose an option:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cin >> choice;
	
	switch(choice){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			cout << "Exiting program.\n";
			break;
		default:
			cout << "Invalid choice. Please choose again.\n";
                break;

	}}while(choice!=5);
return 0;
}
