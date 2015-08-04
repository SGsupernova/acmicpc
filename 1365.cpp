#include<stdio.h>
int i,n,j;
int arr[100001];
int len[100001];
int main(void)
{
	scanf("%d",&n);
	for(i=0;i<n;++i) scanf("%d",arr+i);
	for(i=0;i<n;++i)
	{
		len[i] = 1;
		for(j=i-1;j>=0;--j)
			if(arr[j]<arr[i] && len[i]<len[j]+1)
				len[i] = len[j]+1;
	}
	for(i=1;i<n;++i)
		if(len[i-1]>len[i])
			len[i] = len[i-1];
	printf("%d",n-len[n-1]);
	return 0;
}

