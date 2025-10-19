#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100],ans;
int vis[100],length[100];

void dfs(int sourse)
{
    stack<int> st;
    //vis[sourse]=1;
    st.push(sourse);

    while(!st.empty())
    {
        int curNode;
        curNode=st.top();
        if(vis[curNode]==0)
        {
            vis[curNode]=1;
            ans.push_back(curNode);
        }
        st.pop();
        for(int j=adj[curNode].size()-1;j>=0;j--)
        {
            int adjacentNode = adj[curNode][j];
            if(vis[adjacentNode] == 0)
            {
                st.push(adjacentNode);
                //vis[adjacentNode] = 1;
                //length[adjacentNode]+=(length[curNode]+1);
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
    dfs(source);
    //cout<<length[]
    cout<<"After bfs node sequence will be: ";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

