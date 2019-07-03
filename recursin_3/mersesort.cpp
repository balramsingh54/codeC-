#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr[],int s,int e){

	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;

	int temp[e-s+1];
	int k = 0;

	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			temp[k] = arr[i];
			i++;
			k++;
		}else{
			temp[k++] = arr[j++];
		}
	}

	while(i<=mid){
		temp[k++] = arr[i++];
	}

	while(j<=e){
		temp[k++] = arr[j++];
	}

	int p=0;
	for(int x=s;x<=e;x++){
		arr[x] = temp[p];
		p++;
	}

	// for(int x = 0;x <=e-s;x++){
	// 	arr[x + s] = temp[x]; 
	// }
}


void mergeSort(int arr[],int s,int e){
	if(s>=e){
		return;
	}

	int mid = (s + e)/2;
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);

	merge(arr,s,e);
}


int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	int arr[size];
	cout<<mergeSort(arr,0,5);
	return 0;
}


