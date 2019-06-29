#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,a,b;
	cin>>x>>y;
	int sum =0;
	if (x<=y)
	{
		for (int i = x; i <= y; i++)
		{
			a=i;
			for (int j = y; j >= x; j--)
			{
				b=j;
				int ans=a^b;
				while(ans>sum)
				{
					sum=ans;
				}
			}
		}
		cout<<sum;
	}
	return 0;
}

