//Implementing Arrays in C++
#include<iostream>
using namespace std;

int main(){
	int size,i;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the values in the array"<<endl;
	for( i=0;i<size;i++){
		cin>>arr[i];
	}
			cout<<"The values are "<<endl;
	for( i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}