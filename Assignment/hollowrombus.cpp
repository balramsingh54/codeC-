#include <bits/stdc++.h> 
using namespace std; 
  
  
//Function for Solid Rhombus 
void solidRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
        // Print trailing spaces 
        for (j=1; j<=rows - i; j++) 
            cout << " "; 
              
        // Print stars after spaces 
        for (j=1; j<=rows; j++) 
            cout << "*"; 
              
        // Move to the next line/row 
        cout << "\n"; 
    } 
} 
  
// Function for Solid Rhombus 
void hollowRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
        // Print trailing spaces 
        for (j=1; j<=rows - i; j++) 
            cout << " "; 
              
        // Print stars after spaces 
        // Print stars for each solid rows 
        if (i==1 || i==rows) 
            for (j=1; j<=rows; j++) 
                cout << "*"; 
                  
        // stars for hollow rows 
        else
            for (j=1; j<=rows; j++) 
                if (j==1 || j==rows) 
                    cout << "*"; 
                else
                    cout << " "; 
        // Move to the next line/row 
        cout << "\n"; 
    } 
} 
  
// utility program to print all patterns 
void printPattern(int rows) 
{ 
    // cout << "\nSolid Rhombus:\n"; 
    // solidRhombus(rows); 
      
    // cout << "\nHollow Rhombus:\n"; 
    hollowRhombus(rows); 
} 
  
// driver program 
int main() 
{ 
    int rows;
    cin>>rows; 
    printPattern (rows); 
    return 0; 
} 