#include<bits/stdc++.h>
using namespace std;
int n,f[30001];
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
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
	}
	return 0;
}