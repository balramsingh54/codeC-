#include <iostream>
#include <cassert>

using namespace std;

void Print(int n)
{
    for(int i = 1; i <= 9; i ++){
        int j = 1;
        while( j <= n){
            for(int m = 0; m < j ; ++ m){
                if(m + j * i <= n){
                    cout << m + j * i << endl;
                }
            }
            j *= 10;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    Print(n);
}