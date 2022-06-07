long long maxSubarraySum(int arr[], int n)
{
	int cursum = 0,maxsum = 0,i;
	
	for(i=0;i<n;i++)
	{
		cursum = max(cursum+arr[i],arr[i]);
		maxsum= max(cursum,maxsum);
	}
	return maxsum;
}
