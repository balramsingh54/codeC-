#include <bits/stdc++.h>
using namespace std;

void printPermutations(string ques,string ans){
	if(ques.length()==0){
		//base case
		cout<<ans<<endl;
		return;
	}

	//Recursion Case

	for(int i=0;i<ques.length();i++){
		char ch = ques[i];
		string ros = ques.substr(0,i) + ques.substr(i+1);

		printPermutations(ros,ans+ch);
	}
}

int main(int argc, char const *argv[])
{
	string str;
	if (str.length()<=8)
	{
		cin>>str;
		printPermutations(str,"");	
	}
	
	return 0;
}