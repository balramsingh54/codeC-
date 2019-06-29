#include <bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	int rows=0,cols=0;
 	cin>>rows>>cols;
 	int arr[rows][cols];
 	if (1<rows<10 && 1<cols<10)
 	{
 		for (int i = 0; i < rows; i++)
 		{
 			for (int j = 0; j < cols; j++)
 			{
 				cin>>arr[i][j];
 			}
 		}
 	}

 	for (int i = 0; i < cols; i++)
 	{
 		if (i%2==0)
 		{
 			for (int j = 0; j < rows; j++)
 			{
 				cout<<arr[j][i]<<", ";
 			}
 		}
 		else
 		{
 			for (int j = rows-1; j >=0; j--)
 			{
 				cout<<arr[j][i]<<", ";
 			}
 		}

 	}
 	cout<<"End";

 	return 0;
 }
