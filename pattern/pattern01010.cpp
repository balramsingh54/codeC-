#include <iostream>

using namespace std;

int main(){
int user_row;
cin>>user_row;
for(int row=1; row<=user_row; row++){
	for (int col = 1; col <= row; col++)
	{
		if (((row + col) % 2) == 0) 		{
			cout<<"1";
		}

		else{
			cout<<"0";
		}
	}
	cout<<endl;
}

	return 0;
}