#include <stdio.h>
//this header file is use to run malloc function
#include<stdlib.h>
//create a template for your own data type
struct node{
	int data;
	struct node *next;
};

int main(){
	//declare pointers and head initially 0
	struct node * head,*newnode,*temp;
	head=0;int choice=1;
	while (choice){
	//to add new node at run time we use the malloc function and sizeof give the size which required at that time
	newnode=(struct node*)malloc(sizeof(struct node));
	//Give the data from the user to store in the 1st node
	printf("Enter data\n");
	//data store in data part which is first one
	scanf("%d",& newnode->data);
	//It can store the address  of the next node to linkage the nodes with each others
	newnode->next=0;
	//initially the head is 0 then this statement runs
	if(head==0)
	{
		head=temp=newnode;
	}
	//otherwise else statement run every time
	else{
       temp->next=newnode;
       temp=newnode;
		
	}
	//to print the linked list
	printf("Do you want to continue(0,1)?\n");
	scanf("%d",&choice);
}
temp=head;
while(temp!=0){
	printf("%d ",temp->data);
	temp=temp->next;

}
return 0;
}