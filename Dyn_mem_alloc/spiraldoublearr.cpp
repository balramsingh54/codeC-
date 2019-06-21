#include <iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[5][6]={{1,2,3,4,5,6},
					{11,12,13,14,15,16},
					{21,22,23,24,25,26},
					{31,32,33,34,35,36},
					{41,42,43,44,45,46}};


	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	return 0;
}