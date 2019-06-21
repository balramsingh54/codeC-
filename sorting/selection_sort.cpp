#include<iostream>
#include <climits>

using namespace std;

void swap(int arr[],int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int arr[]={5,6,3,4,7,1,2,9,0};
	display(arr,9);

	for (int i = 0; i < 8; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			if (arr[i]>arr[j])
			{
				swap(arr, i, j);
			}
			
		}

		display(arr, 9);
		cout<<"********************"<<endl;
	}




	return 0;
}