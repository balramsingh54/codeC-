 #include <bits/stdc++.h>
using namespace std;

void substrings(){
	string str = "Hello";

	cout<<str.substr(1,3)<<endl;

	for(int i=0;i<str.length();i++){
		for(int j=1;j<=str.length()-i;j++){
			cout<<str.substr(i,j)<<endl;
		}
	}
}

int main(){

	// reverse();
	// cout<<isPalindrome()<<endl;
	// toggleCharacter();
	// cout<<maxCharacter()<<endl;
	substrings();
	return 0;
}