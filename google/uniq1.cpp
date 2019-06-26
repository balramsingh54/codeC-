#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int length;
	cin>>length;
	int arr[length];
	for (int i = 0; i < length; i++)
	{
		cin>>arr[i];
	}

	// int length = sizeof(arr)/sizeof(arr[0]);
	int Xor = arr[0];
	for (int i = 1; i < length; i++)
	{
		Xor = Xor^arr[i];
	}
	cout<<Xor<<endl;
	return 0;
}