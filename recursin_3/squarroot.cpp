#include <bits/stdc++.h>
using namespace std;

float squareRoot(int n,int p){
	int s = 0;
	int e = n;
	float ans;

	while(s<=e){
		int mid = (s+e)/2;

		if(mid*mid==n){
			ans = mid;
			return ans;
		}else if(mid*mid>n){
			e = mid-1;
		}else{
			ans = mid;
			s = mid+1;
		}
	}

	float inc = 0.1;

	while(p!=0){
		ans+=inc;

		while(ans*ans<=n){
			ans+=inc;
		}

		ans= ans-inc;
		inc = inc/10;
		p--;
	}
	
	return ans;
}


int main(int argc, char const *argv[])
{
	cout<<squareRoot(10,3)<<endl;	
	return 0;
}