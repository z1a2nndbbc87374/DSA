#include <iostream>
using namespace std;
//create a template for your own data type
struct node{
	int data;
	node *next;
};

int main(){
	//declare pointers and head initially 0
	 node * head,*newnode,*temp;
	head=0;int choice=1;
	while (choice){
	//to add new node at run time we use the malloc function and sizeof give the size which required at that time
	newnode=new node;
	//Give the data from the user to store in the 1st node
	cout<<"Enter data\n";
	//data store in data part which is first one
	cin>> newnode->data;
	//It can store the address  of the next node to linkage the nodes with each others
	newnode->next=0;
	//initially the head is 0 then this statement runs
	if(head==0)
	{
		head=newnode;
		temp=head;
	}
	//otherwise else statement run every time
	else{
       temp->next=newnode;
       temp=newnode;
		
	}
	//to print the linked list
	cout<<"Do you want to continue(0,1)?\n";
	cin>>choice;
}
temp=head;
while(temp!=0){
	cout<<temp->data;
	cout<<" ";
	temp=temp->next;

}
return 0;
}