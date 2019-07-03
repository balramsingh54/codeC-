#include<iostream>
using namespace std;

string moveXToEnd(string str){
	if(str.length()==0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);
	string recursion_result = moveXToEnd(ros);

	if(ch=='x'){
		return recursion_result + ch;
	}else{
		return ch + recursion_result;
	}
}

int main() {
	string str;
	cin>>str;
    cout<<moveXToEnd(str);
	return 0;
}