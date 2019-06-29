#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
 {
 	int n=0,m=0;
 	cin>>n>>m;
 	int arr[n][m];
	for (int row = 0; row <n ; row++)
	{
		for (int col = 0; col < m; col++)
		{
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<"---------------------------"<<endl;
// spiral print 

// print 1st row

	int frow = 0, lrow=n-1, fcol=0, lcol = m-1;


	while(fcol <= lcol && frow <= lrow ){
		//print first col;
		for (int i = frow; i <= lrow; i++)
		{
			cout<<arr[i][fcol]<<", ";
		}
		fcol++;
		// print last row
		for (int i = fcol; i <= lcol; i++)
		{
			cout<<arr[lcol][i]<<", ";
		}
		lcol--;

		// print last col
		if(fcol<lcol){
		for (int i = lrow; i >=frow; i--)
		{
			cout<<arr[fcol][i]<<", ";
		}fcol++;
        }

		// print last row
          if(frow<lrow){
		for (int i = lcol; i >= fcol; i--)
		{
			cout<<arr[i][lrow]<<", ";
		}
		lrow--;
          }
        
	}

}