#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a =0||1,b=0||1,c=0||1,d=0||1,e=0||1,f=0||1;
	int num;
	int Decimal_number;
	cout<<"Input binary numbers  ";
	cin>>num;
	if (a==0||1 && a==0||1 && b==0||1 && c==0||1 && d==0||1 && e==0||1 && f==0||1 )
	{
		Decimal_number = f * 2^5 + e * 2^4 + d * 2^3 + c*2^2 +b*2^1+ a * 2^0;
		cout<<Decimal_number;
	}
	




	return 0;
}