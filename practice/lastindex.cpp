#include<iostream>
using namespace std;

int lastIndex(int arr[],int size,int i,int data){
	if(i==size){
		return -1;
	}

	int rest = lastIndex(arr,size,i+1,data);

	if(rest!=-1){
		return rest;
	}else{
		if(arr[i]==data){
			return i;
		}else{
			return -1;
		}
	}
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	int data;
	cin>>data;
	cout<<lastIndex(arr,size,0,data)<<endl;

	return 0;
}