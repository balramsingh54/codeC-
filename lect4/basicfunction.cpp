#include <bits/stdc++.h>
using namespace std;

void increment(int*a){
	*a=*a+1;
	cout<<"Inside function "<<&a<<endl;
}


int main(int argc, char const *argv[]){
	int a;
	
	a=10;
	increment(&a);
	cout<<"Inside main "<<a<<endl;

	int x = 10;
	int &z = x;

	cout<<z<<endl;
	cout<<x<<endl;
	cout<<&z<<endl;


	z++;

	cout<<x<<endl;
	cout<<z<<endl;

	return 0;
}