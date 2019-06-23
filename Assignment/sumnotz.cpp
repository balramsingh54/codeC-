#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0;
	int size;
	// cout<<"enter numbers : "<<endl;
	// cin>>size;
	// int arr[size];
	int arr[]= {};
	for (int i = 0; i < size; ++i)
		{
			cin>>arr[i];
			sum = sum +arr[i];
			if (sum<0)
			{
				break;
			}

		}
		cout<<"sum is :"<<sum;// sum is not coming zero 
	// while(sum>0)
	// {
		
	// 	cout<<"sum is : "<<sum;
	// }


	return 0;
}