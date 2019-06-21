#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i]= arr[j];
	arr[j]= temp;
}

void display(int arr[], int size){
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<endl;
}



int main(int argc, char const *argv[])
{
	int arr[]= {1,3,8,2,6,4,9};
	int counter=1;
	while(counter<8){
	// 	for (int i = 0; i < 7-counter; i++)
	// 	{
	// 		for (int j = i+1; j <7-i ; j++)
	// 		{
	// 			if (arr[i]>arr[j])
	// 			{
	// 				swap(arr, i,j);
	// 			}
	// 		}
	// 	}
	// 	counter++;
	// }
	// display(arr,7);
		for(int i=0;i<7 - counter;i++){
			if(arr[i]>arr[i+1]){
				swap(arr,i,i+1);
			}
		}

		display(arr,7);
		cout<<"*********************"<<endl;
		counter++;
	}
	return 0;
}



