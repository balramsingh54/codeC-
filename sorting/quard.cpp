#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    float D, x_1, x_2;
    cout<<"Enter coefficient of quardratic Equation  "<<endl;
    cin>>a>>b>>c;
    D = b*b - 4*a*c;
    if(D>0){
        cout<<"root will be real and unequall";
    }
    else if(D==0){
        cout<<"root will be real and equall";
    }
    
    else{
        cout<<"root will be Imaginary";
    }
    x_1=(-b+sqrt(D))/2*a;
    x_2=(-b-sqrt(D))/2*a;
    cout<<"roots are "<<x_1<<" and "<<x_2;    
    return 0;
}