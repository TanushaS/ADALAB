#include<bits/stdc++.h>
using namespace std;
int n,g[10][10];
void floyds()
{
    int d[n][n],i,j,k;
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	    d[i][j]=g[i][j];
    for(k=0;k<n;k++)
	  for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
		  if(d[i][j]>d[i][k]+d[k][j])
		    d[i][j]=d[i][k]+d[k][j];
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	   {
	   	if(d[i][j]==-1)
	   	   cout<<"inf"<<" ";
	   	else
		   cout<<d[i][j]<<"   ";
	   }
	 cout<<endl;
    }
}
int main()
{
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		   cin>>g[i][j];
	}
	floyds();
	return 0;
}
