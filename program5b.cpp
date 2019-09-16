#include <bits/stdc++.h>
#include <queue>
#include <iostream>
using namespace std;
int n;
int v[20],adj[20][20],marked[20];
queue<int> q;
int c=0;
void bfs(int ver)
{
    c+=1;
    while(!q.empty())
    {
        if(marked[ver]==0)
        {
        cout<<q.front();
        q.pop();
        cout<<"  ";
        marked[ver]=1;
        }
        else
            q.pop();
        for(int i=0;i<n;i++)
            if(adj[ver][i]==1 && v[i]==0)
            {c+=1;
             v[i]=c;
             q.push(i);
            }
      bfs(q.front());
    }
}
int main()
{
    cout<<"Enter number of vertices\n";
    cin>>n;
    for(int i=0;i<n;i++)
        {v[i]=0;marked[i]=0;}
    cout<<"Enter adjacency matrix\n";
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cin>>adj[i][j];
    for(int i=0;i<n;i++)
        if(v[i]==0)
        {
          q.push(i);
          bfs(i);
        }

    return 0;
}
