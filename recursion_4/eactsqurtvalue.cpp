#include <bits/stdc++.h>
using namespace std;

int squareroot(int value)
{
	int s= 0;
	int e= value-1;
	int ans=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if (mid*mid==value)
		{
			return mid;
		}
		else if (mid*mid>value)
		{
			e=mid-1;
		}
		else
		{
			ans=mid;
			s=mid+1;
		}
	}
	return ans;
}

int seconddigit(int value, int p)
{
	for (int i = .1; i < .9; i++)
	{
		float ans= (ans*i)*(ans*i);
		if (ans<value)
		{
			return ans;
		}
	}
return 0;
}
int main(int argc, char const *argv[])
{
	int value;
	cin>>value;
	int firstdigit= squareroot(value);

	return 0;
}