#include<iostream>
#include <climits>

using namespace std;

void swap(int arr[],int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	display(arr,size);
	int counter = 1;

	while(counter<size){
		for(int i=0;i<size - counter;i++){
			if(arr[i]>arr[i+1]){
				swap(arr,i,i+1);
			}
		}

		// display(arr,size);
		// cout<<"*********************"<<endl;
		counter++;
	}
	cout<<arr[size-1];


	return 0;
}