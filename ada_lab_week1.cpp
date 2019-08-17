#include <stdio.h>
#include <iostream>
#include <math.h>
#include <time.h>
int floors(int x);
using namespace std;
int main(int argc, char **argv)
{
	clock_t st,end;
	st=clock();
	int n;
	cout<<"ENTER A NUMBER\n";
	cin>>n;
	int ans=floors(n);
	cout<<ans;
	cout<<"\n";
	end=clock();
	double t=double(end-st)/double(CLOCKS_PER_SEC);
	cout<<t;
	return 0;
}
int floors(int x)
	{
		if(x<2)
			return x;
		int b=1;
		int e=x/2,m,sq;
		while(b<=e)
		{
			m=(b+e)/2;
			if((m*m)==x)
				return m;
			else if((m*m)>x)
				{e=m-1;
				}
			else{
				b=m+1;
				sq=m;}
		}
		return sq;
	}