#include <bits/stdc++.h>
using namespace std;

class Car
{
	int price;
public:
	int speed;
	char color[20];


	Car()
	{
		cout<<"Initial constructor is called"<<endl;
	}

	Car(int p, int s , char c[38])
	{
		cout<<"Perm constructor is called "<<endl;
		price = set_price(p);
		speed= s;
		strcpy(color,c);
	};

	void print()
	{
		cout<<"price is : "<<price<<endl;
		cout<<"speed is : "<<speed<<endl;
		cout<<"color is : "<<color;
	}


	int set_price(int p)
	{
		if (p>100)
		{
			price=p;
		}
		return p;
	}

	void get_price(){
		cout<<price<<endl;
		}
};


int main(int argc, char const *argv[])
{
	// Car c;
	// c.set_price(10001);
	// c.speed= 240;
	// c.color[0]='R';
	// c.color[1]='e';
	// c.color[2]='d';
	// c.print();
	// cout<<endl;
	// c.get_price();
	// cout<<endl;
	// cout<<"color "<<c.color<<endl;
	// cout<<"speed "<<c.speed<<endl;
	char col[38]="white";
	Car c(500, 400, col);
	c.print();
	return 0;
}