#include<cstdio>

#define absol(a) ((a)>0?(a):(-1*(a)))
typedef struct {
	int x;
	int y;
	long long int dist;
}info;
info cur[4];
int dx[5] = {1,0,-1,0,0},dy[5]={0,1,0,-1,0};
int main(){
	int n,i,j;

	scanf("%d",&n);

	int x,y;
	scanf("%d %d",&x,&y);
	for(i=0;i<5;i++){
		cur[i].x=x;
		cur[i].y=y;
	}

	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		long long int dist,min_dist,temp[5];

		for(j=0;j<5;j++){
			for(int k=0;k<5;k++){
				dist= cur[k].dist + absol( cur[k].x - (x+dx[j]) ) + absol( cur[k].y - (y+dy[j]) );
				if(k==0){
					min_dist = dist;
					continue;
				}
				if(min_dist > dist)
					min_dist = dist;
			}
			temp[j] = min_dist;
		}
		for(j=0;j<5;j++){
			cur[j].x = x+dx[j];
			cur[j].y = y+dy[j];
			cur[j].dist = temp[j];
		}
	}
	long long int min=cur[0].dist;
	for(i=0;i<5;i++)
		min = min<cur[i].dist?min:cur[i].dist;
	printf("%lld",min);


	return 0;
}
