#include <bits/stdc++.h>
using namespace std;
int countsetbit()
{
	// inr count=0;
	// while(n!=0)
	// {
	// 	n=n&(n-1);
	// 	count++;
	// }
	// return count;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int count=0;;
	while(n>0)
{
	n=n&(n-1);
	count++;
}
  cout<<"Ans::::  "<<count;

	return 0;
}