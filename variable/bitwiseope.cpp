#include <iostream>
using namespace std;
int main(){
	cout<<(5&1)<<endl;
	cout<<(5<<1)<<endl; // increse by 2^i  101 output is 10    ; 5* 2^1 = 10
	cout<<(5>>1)<<endl;  // decrease by 2^i     output is 2    ; 5 /2^1 = 2 take integer value

	char a = 'A';
	int check =a ;
	cout<<check;

	return 0;
}