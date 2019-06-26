#include <bits/stdc++.h> 
using namespace std; 
  
// Function, to evaluate the Pythagoras triplet 
// with includes 'n' if possible 
void evaluate(long long int n) 
{ 
  
    if (n == 1 || n == 2) 
        cout<<("No Pythagoras Triplet exists"); 
  
    else if (n % 2 == 0) { 
  
        // Calculating for even case 
        long long int var = 1LL * n * n / 4;
        int x=var - 1;
        int y=var + 1;
        cin>>n;
        cin>>x;
        cin>>y;
    } 
  
    else if (n % 2 != 0) { 
  
        // Calculating for odd case 
        long long int var = 1LL * n * n + 1;  
        cout<<(var / 2 - 1)<<endl;
        cout<<(var / 2);
    } 
} 
  
// Driver function 
int main() 
{ 
    long long int n = 3; 
    evaluate(n); 
    return 0; 
}