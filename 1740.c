#include<stdio.h>
int main(void)
{
	long long int n,ans=0,exp3=1;

	scanf("%lld",&n);
	for(;n;n/=2)
	{
		if(n%2) ans += exp3;
		exp3 *= 3;
	}
	printf("%lld\n",ans);
	return 0;
}
