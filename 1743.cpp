#include<cstdio>
#include<queue>
using namespace std;
int main(void)
{
	int n,m,k,max=0;
	int f[140][140] = {{0,},};
	int dx[4] = {0,1,0,-1};
	int dy[4] = {1,0,-1,0};
	scanf("%d %d %d",&n,&m,&k);
	for(int t=0;t<k;++t)
	{
		int i,j;
		scanf("%d %d",&i,&j);
		f[i][j] = 1;
	}
	for(int i=0;i<=n;++i)
		for(int j=0;j<=m;++j)
			if(f[i][j])
			{
				int ans = 0;
				queue<int> qx;
				queue<int> qy;
				qx.push(i);
				qy.push(j);
				f[i][j] = 0;
				while(!qx.empty())
				{
					ans++;
					int i = qx.front(); qx.pop();
					int j = qy.front(); qy.pop();
					for(int t=0;t<4;++t)
						if(f[i+dx[t]][j+dy[t]])
						{
							qx.push(i+dx[t]);
							qy.push(j+dy[t]);
							f[i+dx[t]][j+dy[t]] = 0;
						}
				}
				if(ans>max) max = ans;
			}
	printf("%d",max);
	return 0;
}
