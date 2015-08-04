#include<stdio.h>
int f[44]={1,1};
int main(){
	int i,r=1,n,m,s=0,t;
	for(i=2;i<41;i++) f[i] = f[i-1]+f[i-2];
	
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&t);
		r*=f[t-s-1];
		s=t;
	}
	r*=f[n-s];
	printf("%d",r);
}
