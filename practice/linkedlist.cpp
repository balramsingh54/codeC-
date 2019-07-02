#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int midpoint;
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	midpoint=(0+size-1)/2;
	cout<<arr[midpoint];

	return 0;
}