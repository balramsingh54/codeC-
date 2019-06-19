#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
	int temp;
	temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main(int argc, char const *argv[]){
	int arr[10];
	cout<<sizeof(arr);

	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	cout<<arr[4];
	cout<<arr<<endl;
	cout<<(arr+1);

	int a = 23;
	int b = 46;

	int temp = a;
	a = b;
	b = temp;

	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	int arr[]= {1,2,3,4,5};

	swap(arr, 0,4);
	display(arr,5);
	return 0;
}