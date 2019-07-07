#include <bits/stdc++.h>
using namespace std;

bool search(int arr[][], int row, int col, int data)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (data==arr[i][j])
			{
				return true;
			}
			else
				return false;
		}
	}
	return false;
}


int main(int argc, char const *argv[])
{
	int row, col, data;
	cin>>row>>col;
	int arr[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>data;

	cout<<search(arr, row, col,data)
	return 0;
}