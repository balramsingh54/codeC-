#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cin>>ch;
	if ('A'<=ch && ch<='Z')
	{
		cout<<"U";
	}
	else if ('a'<=ch && ch<='z')
	{
		cout<<"L";
	}
	else
	{
		cout<<"I";
	}
	return 0;
}