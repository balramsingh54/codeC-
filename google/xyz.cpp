#include<bits/stdc++.h>
using namespace std;
int main() 
{

    int number, remainder, quotient;
    int count, digit, i;
    count = digit = i = 0;

    cin >> number;
    cin >> digit;

    quotient = number;

    while (quotient!= 0) 
    {
        remainder = quotient % 10;
        quotient = quotient / 10;

        if (digit == remainder)
        {
            count = count + 1;
        }
    }
        cout<< count;
        return EXIT_SUCCESS;
}