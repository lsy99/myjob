int max(int a[],int n)
{
	int m,i;
	m=a[0];
	for(i=0;i<n;i++)
		if(m<a[i])
			m=a[i];
	return m;
}

int sum(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
		s+=a[i];
	return s;
}
