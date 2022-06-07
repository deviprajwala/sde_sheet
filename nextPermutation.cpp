vector<int> nextPermutation(vector<int> &per, int n)
{
	int i,j;
	for(i=n-2;i>=0;i--)
	{
		if(per[i]<per[i+1]) break;
	}
	if(i<0) reverse(per.begin(),per.end());
	else
	{
		for(j=n-1;j>i;j--)
		{
			if(per[j]>per[i])
				break;
		}
		swap(per[i],per[j]);
		reverse(per.begin()+i+1,per.end());
	}
	return per;
}
