#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int rows;
	cin>>rows;
	int i,j;
	if (rows<=20)
	{
		for (int i = 0; i <rows; i++)
		{
			for (int j = 0; j < rows-i; j++)
			{
				cout<<" ";
			}
			if (i==1||i==rows)
			{
				for (int j = 1; j < rows; j++)
				{
					cout<<"*";
				}
			}
			else
			{
				for (int j = 1; j < rows; j++)
				{
					if (j==1|| j==rows)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
					cout<<endl;
				}
			}
		}
	}


	return 0;
}