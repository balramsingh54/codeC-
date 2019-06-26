#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
	if (p==0)
	{
		return 1;
	}
	int powern1 = power(n,p-1);
	int total_power= powern1*n;
	return total_power;
}



int main(int argc, char const *argv[])
{
	// power(5,3);
	cout<<power(5,4);

	return 0;
}