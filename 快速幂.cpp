int quick_pow(int a,int b,int mod)
{
	int res=1;
	while(b)
	{
		if(b&1)
		{
			res=(res*a)%mod;
		}
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}