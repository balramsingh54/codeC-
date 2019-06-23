#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{	

	int arr[1000];
	int sum=0;
	{
	
		for (int i = 0; i < 1000; i++)
		{
			if (-1000<arr[i]<1000)
			{
				cin>>arr[i];
				sum=sum+arr[i];
				if (sum<0)
				{
					break;
				}
			}	
		}
		cout<<"sum is : "<<sum;
	}

	return 0;
}