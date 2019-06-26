#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp=arr[i];
	arr[i]= arr[j];
	arr[j]= temp;
}

void reverse(int arr[], int size)
{
	int left=0;
	int right = size-1;
	while(left<=right)
	{
		swap(arr, left, right);
		left++;
		right--;
	}
}

void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int size=0;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	display(arr, size);
	reverse(arr, size);
	display(arr, size);// this code is not executing 

	return 0;
}