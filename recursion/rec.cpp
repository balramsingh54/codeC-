#include<iostream>
using namespace std;

// int cub(int n, int p)
// // {
// // 	// if(p==0)	// }
// // 	// int cub1\= cub(n, p-1);
// // 	// int totalsum= cub1*n;
// // 	// return totalsum;

// // }

void dereasefun(int n)
{
	if (n==0)
	{
		return;
	}
	cout<<n<<endl;
	dereasefun(n-1);
	cout<<n<<endl;
}




int main(int argc, char const *argv[])
{
	// int n=6;
	// int p=3;
	// cub(n,p);
 // 	cout<<cub(n,p)<<endl;

		dereasefun(5);

	return 0;
}