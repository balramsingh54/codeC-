#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	// int n;
	// cin>>n;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>arr[i];
	}

	for (int i = 0; i < 5; i++){
		for (int j = i; j < 5; j++){
			for (int k = i; k < j; k++){
				cout<<arr[k]<<',';
			}
			cout<<endl;
		}
		

	}



	return 0;
}