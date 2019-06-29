#include <bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
	if (p==0)
	{
		return 1;
	}
	if (p%2==0)
	{
		int powern1 = power(n,p/2);
		int total = (powern1)*powern1;
		return total;
	}
	else
	{
		int powern1 = power(n,p/2);
		int total = (powern1)*powern1*n;
		return total;
	}
}


int main(int argc, char const *argv[])
{
	int n;
	int p;
	cin>>n;
	cin>>p;
	cout<<power(n,p);
	return 0;
}