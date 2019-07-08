#include <iostream>
using namespace std;

int main()
{
    int i, j, N;
    cin>>N;
    cout<<"1"<<endl;
    for(i=2; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if((i==2 || j==1 || j==i))
            {
                cout<<i<<"  ";
            }
            else
            {
                cout<<("0")<<"  ";
            }
        }

        cout<<endl;
    }

    return 0;
}