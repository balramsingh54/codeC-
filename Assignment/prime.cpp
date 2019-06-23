#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int flag=1;
	// cout<<"enter number ";
	cin>>n;
	if (2<n<10000000)
	{
	
	for (int i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			flag=0;
			break;
		}
		
	}

	if (flag==0)
	{
		cout<<"this is not prime number ";
	}
	else
	{
		cout<<"this is prime";
	}



}
else
{
	cout<<"not defined";
}
	return 0;
}