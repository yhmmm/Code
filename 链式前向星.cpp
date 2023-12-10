#include<bits/stdc++.h>
using namespace std;
int n,m,u,v,head[10001],pos=0;
struct edge
{
    int u,v,nxt;
}e[20001];
void addedge(int u,int v)
{
    pos++,e[pos]={u,v,head[u]};
    head[u]=pos;
}
int main(){
	cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        addedge(u,v),addedge(v,u);
    }
    for(int i=head[1];i;i=e[i].nxt)
    {
        cout<<e[i].u<<' '<<e[i].v<<endl;
    }
	return 0;
}