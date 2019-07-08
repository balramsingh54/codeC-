#include <bits/stdc++.h>
using  namespace std;

int main(int argc, char const *argv[])
{
	int row, number=1;
	cin>>row;
	for (int i = 1; i <row+1 ; i++)
	{
		for (int j = 0; j <i ; j++)
		{
			cout<<number<<" ";
			number++;
		}
		cout<<endl;
	}
	return 0;
}