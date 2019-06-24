#include <bits/stdc++.h>
using namespace std;

void series(int n1, int n2)
{
	// cout<<"Enter two numbers ";
	// cin>>n1>>n2;
	if (0<n1<100 && 0<n2<100)
	{
		for (int n = 1; n< n1; n++)
		{
			int m = 3*n+2;
			if (m%n2==0)
			{
				continue;
			}
			cout<<m<<endl;
		}
	}
}

 
int main(int argc, char const *argv[])
{
	series(15,4);

	return 0;
}