#include <iostream>
using namespace std;

int main()
{
    int i, j, N;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if((i==1 || j==1 || j==i)||i%2==1)
            {
                cout<<("1");
            }
            else
            {
                cout<<("0");
            }
        }

        cout<<endl;
    }

    return 0;
}