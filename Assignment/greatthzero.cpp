#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0;
	int num;
	int arr[num];
	cout<<"enter numbers ";
	cin>>num; 
	while(num>0)
	{
		for (int i = 0; i < num; i++)
		{
			cin>>arr[i];
			sum= sum+arr[i];
		}
	}
	cout<<"sum is "<<sum;

// sum is not printing and code is not executing break when entering 0;

	return 0;
}