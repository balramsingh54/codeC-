#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i]= arr[j];
	arr[j]=temp;
}
// int size;
void display(int arr[],int  size)
{
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
}

int main(int argc, char const *argv[])
{
	int size;
	int arr[size];
	int counter=1;
	cout<<"enter size"<<endl;
	cin>>size;
	display(arr, size);
	while(counter>size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i]>arr[i+1])
			{
				swap(arr, i,i+1);
			}
		}
		counter++;
	}
	display(arr, size);

	return 0;
}