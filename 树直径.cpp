#include<bits/stdc++.h>
using namespace std;
int n,u,v,dep[1000001],maxd;
vector<int>tree[1000001];
void dfs(int u,int fa)
{
    for(int i=0;i<tree[u].size();i++)
    {
        if(tree[u][i]!=fa)
        {
            dep[tree[u][i]]=dep[u]+1;
            if(dep[tree[u][i]]>dep[maxd])
            {
                maxd=tree[u][i];
            }
            dfs(tree[u][i],u);
        }
    }
}
int main(){
	cin>>n;
    for(int i=1;i<n;i++)
    {
        scanf("%d%d",&u,&v);
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1,0);
    dep[maxd]=0;
    dfs(maxd,0);
    cout<<dep[maxd];
	return 0;
}