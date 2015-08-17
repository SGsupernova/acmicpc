#include<cstdio>
int main(){
	long long int a[4],i, res=0;
	for(i=0;i<4;scanf("%lld",&a[i++]));

	for(i=1;i<=a[1];i*=10);
	res=a[0]*i+a[1];
	for(i=1;i<=a[3];i*=10);
	res+=a[2]*i+a[3];

	printf("%lld",res);

	return 0;
}
