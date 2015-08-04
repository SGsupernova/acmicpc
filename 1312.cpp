#include<cstdio>
int main(){
	int i,u,d,n; scanf("%d %d %d",&u,&d,&n);

	u %= d;
	for(i=0;u*=10,i<n-1;i++)	u %= d;
	u/=d;
	printf("%d\n",u);
}
