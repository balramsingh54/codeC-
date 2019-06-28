#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	// int length=0;
	int sum=0;
	int length=1000;
	int arr[1000];
	for (int i = 0; i < length; i++)
	{
		cin>>arr[i];
		sum = sum+arr[i];
		if (sum<0)
		{
			break;
		}
		else
		{
			cout<<arr[i];
		}
	}
	return 0;
}