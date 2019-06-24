#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	float d;
	char ch;
	cout<<"enter operator ";
	cin>>ch;
	while(true)
	{
	if (ch=='+' ||ch== '-' ||ch== '*' || ch=='/')
	 {
	 	cin>>a>>b;
	 	switch(ch)
	 	{
	 		case '+': c= a+b;
	 			cout<<"sum is "<<c;
	 			break;
	 		case '-': c= a-b;
	 			cout<<"substraction  is "<<c;
	 			break;
	 		case '*': c= a*b;
	 			cout<<"multiplication  is "<<c;
	 			break;
	 		case '/': c= a/b;
	 		// case '/': d= a/b;
	 			cout<<"division is "<<c;
	 			break;
	 	}
	 }
	 else
	 {
	 	cout<<"invalid input, Try Again!";
	 }
	 }
	return 0;
}