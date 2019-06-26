#include <bits/stdc++.h>
using namespace std;
int sumtilln(int n)
{
	if (n==0)
	{
		return 0;
	}
	int sumtilln1 = sumtilln(n-1);
	int total_sum = sumtilln1+n;
	return total_sum;

}

 int main(int argc, char const *argv[])
 {
	
 	sumtilln(5);
 	cout<<sumtilln(5);

 	return 0;
 }