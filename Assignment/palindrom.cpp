#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(){
	string str = "naman";

	int left = 0;
	int right = str.length() - 1;

	while(left<=right){
		if(str[left]!=str[right]){
			return false;
		}

		left++;
		right--;
	}

	return true;
}


int main(int argc, char const *argv[])
{
	cout<<isPalindrome();
	return 0;
}