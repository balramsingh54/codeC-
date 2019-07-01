#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){

	int n;
	cin>>n;
	int maxSum=0;
	int curSum=0;
	int arr[100];
	for (int i = 0; i < n; i++){
		cin>>arr[i];

	}

 	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			int curSum=0;
			for (int k = i; k <= j; k++){
				curSum=curSum+arr[k];
			}
			if (maxSum<curSum)
			{
				maxSum=curSum;
			}
			
		}


	}
		cout<<"maximum sum is "<<maxSum;
	
	return 0;
}