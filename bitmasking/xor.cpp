#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	// int arr[]={1,2,3,2,9,7,3,1,7};
	// int n=arr[0];
	// int length= sizeof(arr)/sizeof(arr[0]);
	// for (int i = 1; i < length; i++)
	// {
	// 	n=n^arr[i];
	// }
	// cout<<n;

	int arr[]={1,2,3,2,9,7,3,1,7,11};
	int n=arr[0];
	int length= sizeof(arr)/sizeof(arr[0]);
	for (int i = 1; i < length; i++)
	{
		n=n^arr[i];
	}
	


	return 0;
}