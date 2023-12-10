long long readlonglong()
{
	long long _x=0,_f=1;
	char _c=getchar();
	while(_c<'0'||_c>'9')
	{
		if(_c=='-')
		{
			_f=-1;
		}
		_c=getchar();
	}
	while(_c>='0'&&_c<='9')
	{
		_x=(_x<<1)+(_x<<3)+(_c^48),_c=getchar();
	}
	return _x*_f;
}