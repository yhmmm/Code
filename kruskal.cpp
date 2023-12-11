#include<bits/stdc++.h>
using namespace std;
int n,m,f[200001],ans=0;
struct AB
{
	int u,v,w;
	bool operator<(const AB &X)const
	{
		return w<X.w;
	}
}a[500001];
int find(int x)
{
	if(f[x]==x)
	{
		return x;
	}
	return f[x]=find(f[x]);
}
void merge(int a,int b)
{
	f[find(a)]=find(b);
}
bool judge(int a,int b)
{
	return find(a)==find(b);
}
int main(){
    cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
        cin>>a[i].u>>a[i].v>>a[i].w;
	}
	sort(a+1,a+m+1);
	for(int i=1;i<=m;i++)
	{
		if(!judge(a[i].u,a[i].v))
		{
			ans+=a[i].w;
			merge(a[i].u,a[i].v);
		}
	}
	cout<<ans;
	return 0;
}
