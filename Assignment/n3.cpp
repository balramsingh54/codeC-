#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,c,b;
	cin>>n;
	if(n<10000000)
	{
		if (n==1 || n==2)
		{
			cout<<"-1"<<endl;
		}
		else if (n%2==0)
		{
			c=(n*n)/4+1;
			b=(n*n)/4-1;
			cout<<min(c,b)<<" "<<max(c,b)<<endl;
		}
		else if (n%2!=0)
		{
			c=(n*n+1)/2;
			b=(n*n-1)/2;
			cout<<min(c,b)<<" "<<max(c,b)<<endl;
		}
	}
	return 0;
}