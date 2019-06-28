#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	// int length=0;
	int sum=0;
	for (int i = 0; i < 1000; i++)
	{
		cin>>i;
		sum = sum+i;
		if (sum<0)
		{
			break;
		}
		else
		{
			cout<<i<<endl;
		}
	}
	return 0;
}