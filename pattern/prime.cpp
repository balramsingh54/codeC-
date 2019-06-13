#include <iostream>
using namespace std; 

int main()
{
    int i,num;
    int flag= 1;

    cout <<"Enter number: ";
    cin >> num;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=0;
            break;
        }

}
    if (flag==0){
        cout<<"not prime";
    }

    else{
        cout<<"prime";
    }
    return 0;
}