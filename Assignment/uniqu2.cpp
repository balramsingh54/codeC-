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
	int Xor = arr[0];
	for (int i = 1; i < length; i++)
	{
		Xor = Xor^arr[i];
	}
	int a =Xor;
	int counter = 0;
	while(1){
		if(a&1){
			counter++;
			break;
		}
		else{
			counter++;
			a=a>>1;
		}
	}
	int left = Xor, right = Xor;

	for (int i = 0; i < length; i++)
	{
		int ele = arr[i];
		ele = ele>>(counter-1);
		if(ele&1){
			left = left^arr[i];
		}
		else{
			right = right^arr[i];
		}
	}
	cout<<left<<endl;
	cout<<right<<endl;
// string str = "hello";
// cout<<str.size()<<endl;
// cout<<str.length()<<endl;


	return 0;
}