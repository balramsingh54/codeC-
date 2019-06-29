#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(){
	char str[1000];
	cin.getline(str, 1000);
	int left = 0;
	int right = strlen(str) - 1;

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