#include <iostream>
using namespace std;

int main()
{
    int i,j,n=1, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= 2*rows-1; j++)
        {
            if (j>=rows-(i-1)&&(j<=rows+(i-1)))
            {
                cout<<i;
            }
            else
            {
            cout << " ";    
            }
        }

        
        cout << endl;
    }    
    return 0;
}