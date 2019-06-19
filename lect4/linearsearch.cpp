#include <bits/stdc++.h>
using namespace std;




int main(int argc, char const *argv[]){
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++){
		cin>>arr[i];
	}

	int item;
	cout<<"Enter item which you want to find"<<endl;
	cin>>item;
	int counter=0;
	while(counter<size){
		if (arr[counter]==item){
			cout<<"Item Found"<<counter;
			break;
		}
		counter++;
		if (counter==size)
		{
			cout<<"item nhi Found"<<endl;
		}
	}


	return 0;
}