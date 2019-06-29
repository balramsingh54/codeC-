#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[4][4] ={{1,2,3,4},
					{21,22,23,23},
					{31,32,33,34,},
					{41,42,43,44}};

	//   cout<<arr[4][4]<<endl;     Check it why this is not printing matrix

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<arr[i][j]<<", ";
		}
		cout<<endl;
	}

	for (int i = 0; i < 4; i++)
	{
		if (i%2==0)
		{
			for (int j = 0; j < 4; j++)
			{
				cout<<arr[i][j]<<", ";
			}
		}
		
		else
		{
			for (int j = 3; j >= 0; j--)
			{
				cout<<arr[i][j]<<", ";
			}
		}
		cout<<endl;
	}

	return 0;
}