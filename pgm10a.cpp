#include<bits/stdc++.h>
using namespace std;
int n,g[10][10];
int mind(int d[],bool s[])
{
	int min=INT_MAX,minindex;
	for(int i=0;i<n;i++)
	{
		if(d[i]<=min && s[i]==false)
		{
			min=d[i];
			minindex=i;
		}
	}
	return minindex;
}
void di(int src)
{
	int dist[n],i,j,k;
	bool sset[n];
	for(i=0;i<n;i++)
	{
		dist[i]=INT_MAX;
		sset[i]=false;
	}
	dist[src]=0;
	for(i=0;i<n-1;i++)
	{
	int u=mind(dist,sset);	
	sset[u]=true;
	for(j=0;j<n;j++)
	{
		if(!sset[j] && g[u][j] && (dist[u]+g[u][j])<dist[j])
		  dist[j]=dist[u]+g[u][j];
	}
    }
    cout<<"\nDistance of different vertices from source:"<<endl;
    for(i=0;i<n;i++)
     cout<<i<<"-->"<<dist[i]<<endl;
}

int main()
{
	int i,j;
	cin>>n;
	//int g[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>g[i][j];
		}
	}
	di(0);
	return 0;
}
