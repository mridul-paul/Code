#include<iostream>
using namespace std;
int main()
{
    int n,e;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>e;
    int adj[100][100]={0};
    cout<<"Enter edges(u,v): "<<endl;
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }
    cout<<"\nAdjancency Matrix: \n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
