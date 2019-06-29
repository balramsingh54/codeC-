#include <bits/stdc++.h>
using namespace std;

int maxCharacter(){
	string str;
	cin>>str;
	int freq[256] = {0};

	for(int i=0;i<str.length();i++){
		char ch = str[i];

		freq[ch]++;
	}

	int max = INT_MIN;

	for(int i=0;i<256;i++){
		if(freq[i]>max){
			max = freq[i];
		}
	}

	return max;
}

int main(int argc, char const *argv[])
{
	cout<<maxCharacter();
	return 0;
}
