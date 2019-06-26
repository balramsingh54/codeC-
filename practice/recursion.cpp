#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	int factorialn1 = factorial(n-1);
	int totalfact = factorialn1*n;
	return totalfact;
}


int main(int argc, char const *argv[])
{
	// int value;
	// cin>>value;
	factorial(6);
	cout<<factorial(6);

	return 0;
}