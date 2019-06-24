#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str1="Hello";
	for (int i = 0; i < str1.length(); i++)
	{
		for (int j = 1; j < str1.length()-i; j++)
		{
			cout<<str1.substr(i,j)<<endl;
		}
	}

	return 0;
}