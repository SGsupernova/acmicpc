#include<cstdio>
#include<algorithm>
using namespace std;

#define get_max(a,b) ((a)>(b)?(a):(b))
#define get_min(a,b) ((a)<(b)?(a):(b))
typedef struct {
	int x;
	int y;
}structure;

bool cmp(structure a,structure b){return a.x<b.x;}

structure building[10001];
long long int dp[10001];
int main(){
	int n,i,max=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d",&building[i].x,&building[i].y);
		if(building[i].y<0)
			building[i].y*=-1;
		building[i].y*=2;
	}

	sort(building,building+n,cmp);

	for(i=0;i<n;i++){
		max		= get_max(max,building[i].y);
		dp[i]	= get_max(max,building[i].x-building[0].x);
	}

	for(i=1;i<n;i++){
		max = building[i].y;

		for(int j=i;j>0;j--){
			max	= get_max(max,building[j].y);
			int temp = get_max(max,building[i].x-building[j].x);
			dp[i] = get_min(dp[i],dp[j-1]+temp);
		}
	}
	printf("%lld",dp[n-1]);

	return 0;
}
