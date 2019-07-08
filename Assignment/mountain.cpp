#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int row;
	cin>>row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j <= i+1; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}