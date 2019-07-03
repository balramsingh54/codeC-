#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 	int n=101;
 	int sieve[101]={0};
 	for (int i = 1; i < n; i+2)
 	{
 		sieve[i]=1;
 	}
 	sieve[0]=0;
 	sieve[1]=0;
 	sieve[2]=1;
 	for (int i = 3; i < 10; i+=2)
 	{
 		if (sieve!=0)
 		{
 			for (int j = i*2; i < n; j+=i)
 			{
 				sieve[j]=0;
 			}
 		}
 	}



 	return 0;
}