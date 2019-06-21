#include <iostream> 
using namespace std;

// void swap(int arr[], int i, int j){
// 	int temp=int arr[i];
// 	int arr[i] = arr[j];
// 	int arr[j] = temp; 
// }


int main(int argc, char const *argv[])
{
	string s2;
	int arr[s2.length()];
	getline(cin,s2);
	for (int i = 0; i < s2.length(); i++)
	{
		cin>>arr[i];
	}

	// for (int i = 0; i <5 ; i++)
	// {
	// 	for (int j = i; i < 5-i; j++)
	// 	{
	// 		swap(arr[],arr[i],[j]);
	// 	}
	// }
	cout<<s2;
	return 0;
}