#include<cstdio>
#define get_max(a,b) ((a)>(b)?(a):(b))
#define get_min(a,b) ((a)<(b)?(a):(b))
long long int field[3], min_dp[2][3],max_dp[2][3];

int main(){
	int n,i,j;

	scanf("%d",&n);
	for(i=0;i<3;i++) {
		scanf("%lld",&field[i]);
		max_dp[0][i] = field[i];
		min_dp[0][i] = field[i];
	}

	for(i=1;i<n;i++){
		for(j=0;j<3;j++)	scanf("%lld",&field[j]);

		/* maximum */
		max_dp[1][0] = field[0] + get_max(max_dp[0][0],max_dp[0][1]);
		max_dp[1][1] = field[1] + get_max( get_max(max_dp[0][0],max_dp[0][1]),max_dp[0][2]);
		max_dp[1][2] = field[2] + get_max(max_dp[0][1],max_dp[0][2]);

		/* minimum */
		min_dp[1][0] = field[0] + get_min(min_dp[0][0],min_dp[0][1]);
		min_dp[1][1] = field[1] + get_min( get_min(min_dp[0][0],min_dp[0][1]),min_dp[0][2]);
		min_dp[1][2] = field[2] + get_min(min_dp[0][1],min_dp[0][2]);

		for(j=0;j<3;j++) {
			max_dp[0][j] = max_dp[1][j];
			min_dp[0][j] = min_dp[1][j];
		}
	}

	long long int max = max_dp[0][0],min = min_dp[0][0];
	for(i=0;i<3;i++){
		if(max<max_dp[0][i])
			max = max_dp[0][i];
		if(min>min_dp[0][i])
			min = min_dp[0][i];
	}
	printf("%lld %lld",max,min);

	return 0;
}
