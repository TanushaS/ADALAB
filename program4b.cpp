#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n,adj[20][20],vis[20];
void DFS(int v)
{

	cout<<v<<"\t";
	vis[v]=1;
	for(int i=1;i<n;i++)
		if(adj[v][i]==1 && vis[i]==0)
			DFS(i);
}
int main(int argc, char **argv)
{
	int c=1;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	cout<<"Enter the adjacent matrix\n";
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
	for(int i=0;i<n;i++)
		vis[i]=0;
		cout<<"--CONNECTED COMPONENTS--\n";
	DFS(0);
	
	for(int i=0;i<n;i++)
		if(vis[i]!=1)
			{cout<<"\n";
			c++;
			DFS(i);}
			cout<<"\nNumber of islands:"<<c;
	return 0;
}
