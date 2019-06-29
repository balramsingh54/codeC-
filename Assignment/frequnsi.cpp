#include <bits/stdc++.h>
using namespace std;

// int maxCharacter(){
// 	string str = "aaabbaaccddde";
// 	int freq[256] = {0};

// 	for(int i=0;i<str.length();i++){
// 		char ch = str[i];

// 		freq[ch]++;
// 	}

// 	int max = INT_MIN;

// 	for(int i=0;i<256;i++){
// 		if(freq[i]>max){
// 			max = freq[i];
// 		}
// 	}

// 	return max;
// }

int main(int argc, char const *argv[])
{
	string s1;
	getline(cin,s1);
	int arr[256]={0};
	char ch;
	if (1<=s1.length()<=100)
	{
		for (int i = 0; i < s1.length(); i++)
		{
			ch=s1[i];
			arr[ch]++;
		}
	}
	for (int j = 0; j < 256; j++)
	{
		if (arr[j]>0)
		{
			ch=j;
			cout<<ch<<arr[j];
		}
	}

	return 0;
}
