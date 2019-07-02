#include <bits/stdc++.h>
using namespace std;

int countmazepath(int sr, int sc, int er, int ec )
{
	if(sr==er and sc==ec)
	{
		return 1;
	}
	if (sr>er or sc>ec)
	{
		return 0;
	}

	int counthorizonal = countmazepath(sr,sc+1,er,ec);
	int countvertical =  countmazepath(sr+1,sc,er,ec);

	return count;
}

int main(int argc, char const *argv[])
{
	countmazepath(sr,sc,er,ec);
	return 0;
}