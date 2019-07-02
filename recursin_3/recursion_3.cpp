#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(string str)
{
if (str.length()==0)
 {
 	 return "";
 } 
char ch=str[0];
string ros = str.substr(1);
string recurdin_result=remove_duplicate(ros);
if (ch==recurdin_result[0])
{
	return recurdin_result;
}
else
{ 
	return recurdin_result+ch;
}
}
int main(int argc, char const *argv[])
{
	string str = "aaabbcccdddd";
	cout<<remove_duplicate(str);
	return 0;
}