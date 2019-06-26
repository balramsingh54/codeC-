#include <bits/stdc++.h>
using namespace std;

int fibbonaci(int n)
{
	if (n==0||n==1)
	{
		return n;
	}
	int fibbonacin1 = fibbonaci(n-1);
	int fibbonacin2 = fibbonaci(n-2);
	int fibsum = fibbonacin1+fibbonacin2;
	cout<<fibsum<<" ";
	cout<<endl;
	return fibsum;
}


int main(int argc, char const *argv[])
{


	fibbonaci(6);
	cout<<fibbonaci(6);
	return 0;
}