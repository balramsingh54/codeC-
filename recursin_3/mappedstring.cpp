#include <bits/stdc++.h>
using namespace std;

void mappedString(char arr[],int i,string ans){
	if(arr[i]=='\0'){
		cout<<ans<<endl;
		return;
	}

	char ch = arr[i];
	int ch_int = ch - '0';

	ch =ch - '0' + 'A' - 1;
	mappedString(arr,i+1,ans+ch);

	if(arr[i+1]!='\0'){
		char second_ch = arr[i+1];
		int second_int = second_ch - '0';

		int two_digit = ch_int*10 + second_int;

		if(two_digit<= 26){

			char two_char = two_digit + 'A' - 1;
			mappedString(arr,i+2,ans + two_char);
		}
	}

}


int main(int argc, char const *argv[])
{
	char arr[] = "123";
	mappedString(arr,0,"");	
	return 0;
}