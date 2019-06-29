#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char ch = 'a';
	cout<<ch;
	char*ptr=&ch;
	cout<<ptr;

	char arr[]= "Lanchpad";
	int brr[]= {1,2,3,4,5,6,7};
	cout<<arr<<endl;
	cout<<brr;
	char arr[] = {'a','b','c'};
	char brr[] = "abc";

	cout<<arr<<endl;
	cout<<sizeof(arr)<<endl;

	cout<<brr<<endl;
	cout<<sizeof(brr)<<endl;
	char arr[50];

	cin>>arr;

	cout<<arr<<endl;
	cin.getline(arr,50);

	char para[100];

	cin.getline(para,100,'.');
	cout<<para<<endl;

	string s1 = "Pranav Khandelwal";
	cout<<s1<<endl;

	string s2 = "Sanjeet";
	cout<<s2<<endl;

	cout<<sizeof(s1)<<endl;
	cout<<sizeof(s2)<<endl;

	cout<<(s1.length())<<endl;
	cout<<(s2.length())<<endl;
	return 0;
}