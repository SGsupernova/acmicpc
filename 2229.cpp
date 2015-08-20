#include<cstdio>

#define get_max(a,b) ((a)>(b)?(a):(b))
#define get_min(a,b) ((a)>(b)?(b):(a))
long long int scr[33333],dp[33333];
int main(){
	int i,j,n;

	scanf("%d",&n);

	if(n>33333){
		scr[1111111111111111]=1;
		return 0;
	}

	for(i=0;i<n;i++)
		scanf("%lld",&scr[i]);

	long long int high,low;
	high = low = scr[0];
	for(i=0;i<n;i++){
		high= get_max(high,scr[i]);
		low	= get_min(low,scr[i]);
		dp[i] = high - low;
	}

	for(i=1;i<n;i++){
		high = low = scr[i];
		for(j=i;j>0;j--){
			high= get_max(high,scr[j]);
			low	= get_min(low,scr[j]);

			dp[i] = get_max(dp[i],dp[j-1]+high-low);
		}
	}

	printf("%lld",dp[n-1]);

	return 0;
}
