#include <bits/stdc++.h>
using namespace std;

bool deadtrack(int row,int col, int n, int m)

{
	if (n>row or m> col)
	{
		return false;
	}
	return true;

}
int main(int argc, char const *argv[])
{
	int size1=0, size2=0;
	int row[size1],col[size2];
	int n, m;
	cin>>size1>>size2>>n>>m;
	cout<<deadtrack(row,col, n, m,)
	return 0;
}