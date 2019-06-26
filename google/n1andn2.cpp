#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    cin>>number1>>number2;
      int count =0; 
      int i=1;  ///CHANGE
      while(count<number1) ///CHANGE
      {

        int number = (3*i)+2;
        i++;
        if((number%number2)==0)
        {

        }
        else
        {
            cout<<number<<endl;
            count++;
        }

      }
    return 0;
}