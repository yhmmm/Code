void qsort(int l,int r)
{
	if(l>=r)
	{
		return;
	}
	int MID=a[l+r>>1],I=l,J=r;
	while(I<=J)
	{
		while(a[I]<MID)
		{
			I++;
		}
		while(a[J]>MID)
		{
			J--;
		}
		if(I<=J)
		{
			swap(a[I++],a[J--]);
		}
	}
	qsort(l,J),qsort(I,r);
}