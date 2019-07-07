#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{	int n5=1001;
	int sieve[1001] = {0};
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
	// int a, b;
	// a = 30;
	// b = 90;
	int n;
	cin>>n;
	int arr[n];
	0<n<=1000;
	for (int i = 0; i < n; i++)
	{
		
		int n1, n2;
		cin>>n1;
		cout<<" ";
		cin>>n2;
		int count=0;
		
		for (int j = n1; j <=n2 ; j++)
			{	
				if(sieve[j])
					{
						// cout<<j<<" ";
						count++;
					}
			}
			arr[i]=count;	
		}	//cout<<endl;
	for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<" ";
		}


	return 0;
}