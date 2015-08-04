#include<cstdio>
#define MOD 1000000000
long long int arr[1000001] = {1,};
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		if(i%2) arr[i] = arr[i-1];
		else
			for(int j=1;j<=i;j*=2,arr[i]%=MOD)
				if(i%j==0) arr[i] += arr[i/j-1];
	}
	printf("%lld",arr[n]);
	return 0;
}
