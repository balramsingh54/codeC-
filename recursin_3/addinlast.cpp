#include <bits/stdc++.h>
using namespace std;
string addinlast(string str)
{
	// int right size-1;
	if(str.length()==0){
		return "";
	}
	char ch =str[0];
	string ros = str.substr(1);
	string recurdin_result  = str.substr(ros);
	if (str[0]=='x')
	{
		return recurdin_result+'x';
	}
	return 'x'+recurdin_result;

}

int main(int argc, char const *argv[])
{
	string str = "xabaaxxbxxxx";
	addinlast(str);
	return 0;
}