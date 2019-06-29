#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int size=0;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	//int arrLen = sizeof(arr)/sizeof(arr[0]);
	int arrLen =size;
	int leftMax[arrLen];
	int rightMax[arrLen];
	int left = arr[0];
	int right = arr[arrLen-1];
	for (int i = 0; i < arrLen; i++)
	{	if(left < arr[i]){
			left = arr[i];
		}
		leftMax[i] = left;
	}
	for (int i = arrLen-1; i >=0; i--)
	{	if(right < arr[i]){
			right = arr[i];
		}
		rightMax[i] = right;
	}
	int water = 0;
	for (int i = 0; i < arrLen; ++i)
	{
		water+= min(leftMax[i],rightMax[i])-arr[i];
	}

	cout<<water<<endl;
	return 0;
	
	}