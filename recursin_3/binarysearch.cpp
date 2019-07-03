#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int size,int data){
	int s = 0;
	int e = size-1;

	while(s<=e){
		int mid = (s+e)/2;

		if(arr[mid]==data){
			return mid;
		}else if(arr[mid]>data){
			e = mid - 1;
		}else{
			s = mid+1;
		}
	}

	return -1;
}
int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	int data;
	cin>>data;
	// cout<<binarysearch(arr, size, data);
	// int arr[] = {1,2,3,4,5,6,7};
	// int data = 5;

	cout<<binarySearch(arr,size,data)<<endl;
	return 0;
}