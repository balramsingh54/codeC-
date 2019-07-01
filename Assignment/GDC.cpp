#include <bits/stdc++.h> 
using namespace std; 
  

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
  
// Driven code 
int main() 
{ 
	int size;
	cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
    	cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << findGCD(arr, n) << endl; 
    return 0; 
}