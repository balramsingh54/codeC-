#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main(int argc, char const *argv[]){
	int low=0;
	int mid=1;
	int high=2;
	int arr[9]={0,1,0,2,1,0,2,1,0}
	for (int i = 0; i < 10; i++){
		if (arr[i]==0){
		}
		cout<<arr[i];
	}




	return 0;
}