#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100],ans;
int vis[100],length[100];


void bfs(int sourse)
{
    queue<int> q;
    vis[sourse]=1;
    q.push(sourse);

    while(!q.empty())
    {
        int curNode;
        curNode=q.front();
        ans.push_back(curNode);
        q.pop();
        for(int j=0;j<adj[curNode].size();j++)
        {
            int adjacentNode = adj[curNode][j];
            if(vis[adjacentNode] == 0)
            {
                q.push(adjacentNode);
                vis[adjacentNode] = 1;
                length[adjacentNode]+=(length[curNode]+1);
            }
        }
    }
}

int main()
{
    int node,edge,u,v,i;
    cout<<"Enter the node and Edge: "<<endl;
    cin>>node>>edge;
    cout<<"Enter the edge list: "<<endl;
    /*
    5 6
    0 1
    0 3
    1 3
    2 3
    3 4
    2 4
    */
    for(i=0;i<edge;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Enter The Source node Where you want visit bfs: "<<endl;
    int source;
    cin>>source;
    bfs(source);
    //cout<<length[]
    cout<<"After bfs node sequence will be: ";
    for(i=0;i<ans.size();i++)
    {
        cout<<length[i]<<" ";
    }
    cout<<endl;
}
