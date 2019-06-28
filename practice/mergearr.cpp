#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr1[4] = {2,6,9,12};
	int arr2[5]= {1,5,7,13,16};
	int arrtotal[9];

	for (int i = 0; i < 4; i++)
	{
		arrtotal[4]=arr1[i];
	}
	for (int i = 0; i < 5; i++)
	{
		arrtotal[5]=arr2[i];
	}

	for (int i = 0; i < 9; i++)
	{
		cout<<arrtotal[i]<<endl;
	}
	cout<<endl;
	return 0;
}