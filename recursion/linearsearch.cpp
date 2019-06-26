#include<iostream>
using namespace std;

int linearsearch(int arr[], int  length, int value, int i)
{
	if (i==length)
	{
		return -1;
	}

	if (value==arr[i])
	{
		return i;
	}

	int p= linearsearch(arr,length,value, i+1);
	return p;
}

int main(int argc, char const *argv[])
{
	int value;
	int i=0;
	cin>>value;
	int arr[]={56,12,23,34,45};
	int length= sizeof(arr)/sizeof(arr[0]);
	cout<<linearsearch(arr, length, value, i);
	return 0;
}