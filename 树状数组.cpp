int n,a[1000001],ca[1000001],cb[1000001],t;
int lowbit(int X)
{
	return X&(-X);
}
void update(int idx,int x)
{
	for(int i=idx;i<=n;i+=lowbit(i))
	{
		ca[i]+=x,cb[i]+=x*idx;
	}
}
int sum(int v)
{
	t=0;
	for(int i=v;i>0;i-=lowbit(i))
	{
		t+=(v+1)*ca[i]-cb[i];
	}
	return t;
}
