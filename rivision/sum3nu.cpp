#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		int a, b, sum=0;
		cin>>a>>b;
		sum=a+b;
		arr[i]=sum;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}