#include <iostream> 

using namespace std;
int main(int argc, char const *argv[]){
	int arr[4][4]={{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12,},
					{13,14,15,16},};

	for (int row = 0; row < 4; row++){
		if (row==1||3){
			for (int col = 0; col < 4; col++){
			cout<<arr[row][col]<<"";
		}
		if (row==2||4){
			for (int col = 2; col < 4; col--){
			cout<<arr[row][col]<<"";
		}
	}
		
		
	}



	return 0;
}