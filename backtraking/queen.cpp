#include <bits/stdc++.h>
using namespace std;

bool is_safe(int maze[][],  int row, int col)
	{
		for (int i = 0; i < n; i++)
		{
			if (maze[i][col]==1)
			{
				return false;
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (maze[row][j]==1)
			{
				return false;
			}
		}
		for (int k = 0; k < n; k++)
		{
			 if (maze[row+1][col+1]==1)
			 {
			 	return false;
			 }
		}
	}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int maze[n][n];
	queenplace(maze, row, col)
	return 0;
}