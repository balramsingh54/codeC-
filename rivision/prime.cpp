#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{	int n5=101;
	int sieve[101] = {0};
	for(int i=1; i<n5; i=i+2){
		sieve[i]=1;
	}
	sieve[0]=0;
	sieve[1]=0;
	sieve[2]=1;

	for (int i = 3; i < 10; i+=2)
	{	if(sieve[i]!=0){
			for (int j = i*2; j < n5; j+=i)
			{
				sieve[j]=0;
			}
		}
		
	}

//optimization
	for (int i = 3; i < 10; i+=2)
	{	if(sieve[i]!=0){
			for (int j = i*i; j < n5; j+=i*2)
			{
				sieve[j]=0;
			}
		}
		
	}

// print prime no. from a to b
	int n, n1,n2,n3,n4;
	cin>>n;
	int count1=0;
	int count2=0;
	int arr[2*n];
	for (int i = 0; i < 2*n; i++)
	{
		cin>>arr[i];
	}
	for (int i = arr[0]; i <=arr[1] ; i++)
	{
		if(sieve[i]){
			cout<<i<<", "<<endl;
			count1++;
		}
	}
	for (int i = arr[2]; i <=arr[3] ; i++)
	{
		if(sieve[i]){
			cout<<i<<", "<<endl;
			count2++;
		}
	}
	cout<<count1<<endl;
	cout<<count2;


	return 0;
}