#include<cstdio>
#include<algorithm>
using namespace std;
int main(void)
{
	int t;
	int tmp[10000] = {0,};
	scanf("%d",&t);
	while(t--)
	{
		int dat[10000] = {0,},n;
		scanf("%d",&n);
		printf("%d",n/2+1);
		for(int i=0;i<n;++i)
		{
			if(i%20==0)puts("");
			scanf("%d",dat+i);
			if(i%2==0&&i!=0)
			{
				for(int j=i-1;j<=i;++j) tmp[j] = dat[j];
				sort(tmp,tmp+i+1);
				printf("%d ",tmp[i/2]);
			}else if(!i) {
				tmp[0] = dat[0];
				printf("%d ",tmp[0]);
			}
		}
		if(t) puts("");
	}
	return 0;
}
