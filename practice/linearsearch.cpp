#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr, int data, int i, int size)
{
	if (i==size)
	{
		return -1;
	}
	if (arr[i]==data)
	{
		return i;
	}
	else
	{
		int rest= linearsearch(arr,data,i+1, size);
		return rest;
	}
}

int main(int argc, char const *argv[])
{
	int arr[6]={23,34,45,56,67,78};
	int data =56;
	int size 6;
	linearsearch(arr, data,0, size);

	return 0;
}