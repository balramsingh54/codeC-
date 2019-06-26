#include <bits/stdc++.h>
using namespace std;
int countsetbit()
{
int main(int argc, char const *argv[])
{
	int length;
	cin>>length;
	int arr[length];
	for (int i = 0; i < length; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < length; i++)
	{
		
		int count=0;;
		while(arr[i]>0)
		{
			arr[i]=arr[i]&arr[i]-1;
			count++;
			cout<<count<<endl;
		}
	}

	return 0;
}