#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int n1;
		cin>>n1;
		int arr[n1];
		int maxSum=0;
		for (int j = 0; j < n1; j++)
		{
			cin>>arr[i];
			// int arr[6] = {1,2,8,-4,-1,7};
			int currSum=0 ;
			for (int i = 0; i < 6; ++i)
				{
				currSum+=arr[i];
				if (currSum<0)
					{
						currSum = 0;
					}
				if (currSum>maxSum)
					{
						maxSum = currSum;
					}
				}
			}
			cout<<maxSum<<endl;
		
		}
		return 0;
}